#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list.
 * @head: pointer to the 1st node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpn = NULL;
	const listint_t *ln = NULL;
	size_t count = 0;
	size_t newn;

	tmpn = head;
	while (tmpn)
	{
		printf("[%p] %d\n", (void *)tmpn, tmpn->n);
		count;
		tmpn = tmpn->next;
		ln = head;
		newn = 0;
		while (newn < count)
		{
			if (tmpn == ln)
			{
				printf("-> [%p] %d\n", (void *)tmpn, tmpn->n);
				return (count);
			}
			ln = ln->next;
			newn++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
