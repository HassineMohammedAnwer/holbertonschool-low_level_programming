#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: pointer to head of the list
 * @n: int to add
 * Return: Adress of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_h;
	listint_t *h;

	h = *head;
	new_h = malloc(sizeof(listint_t));
	new_h->n = n;
	new_h->next = NULL;
	if (new_h == NULL)
		return (NULL);
	if (!*head)
	{
		*head = new_h;
		return (new_h);
	}
	while (h->next)
		h = h->next;
	h->next = new_h;
	return (new_h);
}
