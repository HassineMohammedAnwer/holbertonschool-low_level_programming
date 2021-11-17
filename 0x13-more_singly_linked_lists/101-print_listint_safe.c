#include "lists.h"

/**
 * print_listint_safe - check the code
 * @head: head of list
 * Return: number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, m;

	while (head != NULL)
	{
		m = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (m > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
