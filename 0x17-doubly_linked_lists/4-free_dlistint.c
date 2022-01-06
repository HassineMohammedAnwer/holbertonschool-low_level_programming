#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
