#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = malloc(nmemb * size);

	if (y == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		y[a] = 0;

	return (y);
}
