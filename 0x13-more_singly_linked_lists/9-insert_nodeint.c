#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: pointer to head of the list
 * @n: int to add
 * @idx: int
 * Return: Adress of the new element.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_h, *l;
	listint_t *h;
	unsigned int i = 0;

	new_h = malloc(sizeof(listint_t));
	if (new_h == NULL)
		return (NULL);
	new_h->n = n;
	new_h->next = NULL;
	if (!head)
	{
		return (NULL);
	}
	h = *head;
	if (idx == 0)
	{
		new_h->next = h;
		*head = new_h;
		return (new_h);
	}
	while (h)
	{
		if (i == idx)
		{
			new_h->next = h;
			l->next = new_h;
			return (new_h);
		}
		l = h;
		h = h->next;
		i++;
	}
	if (i == idx)
	{
		l->next = new_h;
		return (new_h);
	}
	return (NULL);
}
