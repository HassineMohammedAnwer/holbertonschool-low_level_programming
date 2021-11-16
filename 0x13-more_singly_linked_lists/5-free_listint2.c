#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: list
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (!head)
		exit(100);
	h = *head;
	while (h != NULL)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	h = NULL;
	free(h);
	*head = NULL;
}
