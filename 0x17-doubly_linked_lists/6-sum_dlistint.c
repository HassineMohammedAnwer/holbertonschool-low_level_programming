#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
 * @head:head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
