#include "lists.h"

/**
 * sum_listint - check the code
 * @head: list
 *
 * Return: sum of all nodes data.
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	h = head;
	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
