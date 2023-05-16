#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array and initializes it
 * @size: size of array
 * @c: char to init
 *
 * Return: pointer(Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (a < size)
	{
		*(x + a) = c;
		a++;
	}

	*(x + a) = '\0';

	return (x);
}
