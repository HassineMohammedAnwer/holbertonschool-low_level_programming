#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: list
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	h = *head;
	while (head != NULL)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	h = NULL;
	free(h);
	*head = NULL;
}
