#include "lists.h"

/**
 * free_list - check the code
 * @head: list
 * Return: none.
 */
void free_list(list_t *head)
{
	list_t *h = head;
	while (h != NULL)
	{
		free(h);
		h = h->next;
	}
}
