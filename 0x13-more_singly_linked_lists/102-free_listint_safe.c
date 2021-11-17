#include "lists.h"
/**
 * free_listint_safe - check the code
 * @h: list
 *
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *l;
	size_t i = 0;

	while (*h && ((*h)->next < *h))
	{
		i++;
		l = (*h)->next;
		free(*h);
		*h = l;
	}
	if (*h)
	{
		i++;
		free(*h);
	}
	*h = NULL;
	return (i);
}
