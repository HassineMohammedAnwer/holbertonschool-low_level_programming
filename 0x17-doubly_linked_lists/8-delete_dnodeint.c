#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer for list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nn = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		nn++;
	}

	return (nn);
}

/**
 *  delete_dnodeint_at_index - delete node at give index
 * @head:list
 * @index:given index
 * Return: -1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	unsigned int i = 0;

	start = *head;
	if (*head == NULL)
		return (-1);
	if (!index)
	{
		(*head) = start->next;
		if (start->next)
			start->next->prev = NULL;
		start->next = NULL;
		free(start);
		return (1);
	}

	if (*head == NULL || dlistint_len(start) < index + 1)
		return (-1);
	while (i < index)
	{
		i++;
		start = start->next;
	}

	start->prev->next = start->next;
	if (start->next)
		start->next->prev = start->prev;
	free(start);
	return (1);
}
