#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *temp = head;

	while (temp)
	{
		a += temp->n;
		temp = temp->next;
	}

	return (a);
}
