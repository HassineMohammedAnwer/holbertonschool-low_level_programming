#include "lists.h"

/**
 * add_node - check the code
 * @head: pointer to head of the list
 * @str: string to add
 * Return: Adress of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));
	if (new_h == NULL)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	*head = new_h;
	free(new_h);
	return (*head);
}
