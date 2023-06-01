#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the start of a linkedlist
 * @head: double pointer to the list
 * @str: new string
 *
 * Return: the address of the new element, or (NULL) fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *brandnew;
	unsigned int a = 0;

	while (str[a])
		a++;

	brandnew = malloc(sizeof(list_t));
	if (!brandnew)
		return (NULL);

	brandnew->str = strdup(str);
	brandnew->len = a;
	brandnew->next = (*head);
	(*head) = brandnew;

	return (*head);
}
