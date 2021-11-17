#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: list
 * @index: node's number
 * Return: node's pointer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	h = head;
	while (i < index && h != NULL)
	{
		h = h->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (h);
}
