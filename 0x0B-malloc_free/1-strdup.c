#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string
 * @str: string to duplicate
 *
 * Return: pointr (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int a, calc;

	a = 0;
	calc = 0;

	if (str == NULL)
		return (NULL);

	while (str[calc])
		calc++;

	d = malloc(sizeof(char) * (calc + 1));

	if (d == NULL)
		return (NULL);

	while ((d[a] = str[a]) != '\0')
		a++;

	return (d);
}
