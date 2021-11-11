#include "lists.h"

/**
 * free_list - check the code
 * @head: list
 * Return: none.
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
	free(h);
}
