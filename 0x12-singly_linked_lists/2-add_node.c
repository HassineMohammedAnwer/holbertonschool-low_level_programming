#include "lists.h"

/**
 * add_node - check the code
 * @head: pointer to head of the list
 * @str: string to add
 * Return: Adress of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;

	new_h = malloc(sizeof(list_t));
	if (new_h == NULL)
		return (NULL);
	new_h->str = strdup(str);
	new_h->len = strlen(str);
	new_h->next = *head;
	*head = new_h;
	return (*head);
}
