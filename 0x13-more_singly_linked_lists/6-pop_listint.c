#include "lists.h"

/**
 * pop_listint - check the code
 * @head: list
 * Return: n.
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	h = malloc(sizeof(listint_t));
	if (*head == NULL || h == NULL)
		return (0);
	h = *head;
	n = h->n;
	*head = h->next;
	return (n);
}
