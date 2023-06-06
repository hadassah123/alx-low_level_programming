#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *l;
	listint_t *t = *head;

	l = malloc(sizeof(listint_t));
	if (!l || !head)
		return (NULL);

	l->n = n;
	l->next = NULL;

	if (idx == 0)
	{
		l->next = *head;
		*head = l;
		return (l);
	}

	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
		{
			l->next = t->next;
			t->next = l;
			return (l);
		}
		else
			t = t->next;
	}

	return (NULL);
}
