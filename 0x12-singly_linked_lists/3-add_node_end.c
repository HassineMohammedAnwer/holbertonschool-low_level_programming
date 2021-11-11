#include "lists.h"

/**
 * add_node_end - check the code
 * @head: pointer to head of the list
 * @str: string to add
 * Return: Adress of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *h;

	h = *head;
	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = p;
	return (p);
}
