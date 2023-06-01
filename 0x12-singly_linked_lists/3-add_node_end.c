#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brandnew;
	list_t *t = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	brandnew = malloc(sizeof(list_t));
	if (!brandnew)
		return (NULL);

	brandnew->str = strdup(str);
	brandnew->len = l;
	brandnew->next = NULL;

	if (*head == NULL)
	{
		*head = brandnew;
		return (brandnew);
	}

	while (t->next)
		t = t->next;

	t->next = brandnew;

	return (brandnew);
}
