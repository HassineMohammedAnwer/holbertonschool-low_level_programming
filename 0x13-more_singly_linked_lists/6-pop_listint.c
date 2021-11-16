#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: list
 * Return: none.
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	h = malloc(sizeof(list_t));
	if (*head == NULL)
		return (0);
	n = head->n;
	*head = head->next;
	return (n);
}
