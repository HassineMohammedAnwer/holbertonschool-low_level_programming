#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: head
 * @index: idx int
 * Return: 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h, *l;

	if (head == NULL)
		return (-1);
	h = *head;
	l = *head;
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	while (h->next)
	{
		if (i == index)
		{
			l->next = h->next;
			free(h);
			return (1);
		}
		i++;
		l = h;
		h = h->next;
	}
	if (i == index)
	{
		l->next = NULL;
		free(h);
		return (1);
	}
	free(l);
	return (-1);
}
