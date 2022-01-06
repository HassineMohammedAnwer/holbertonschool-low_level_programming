#include "lists.h"
/**
 * add_dnodeint - a functionn adds a new node at the beginning of a dlistint_t
 * @head: head of the list
 * @n: int to add
 *
 * Return: on success the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
