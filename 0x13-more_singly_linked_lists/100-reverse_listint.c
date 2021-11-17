#include "lists.h"

/**
 * reverse_listint - check the code
 * @head: head
 * Return: pointer to the head og reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *l = NULL;

	if (*head == NULL)
		return (NULL);
	while (h)
	{
		h = (*head)->next;
		(*head)->next = l;
		l = *head;
		*head = h;
	}
	*head = l;
	return (*head);
}
