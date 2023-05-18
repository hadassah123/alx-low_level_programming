#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *xr;
	int a;

	if (min > max)
		return (NULL);

	xr = malloc(sizeof(*xr) * ((max - min) + 1));

	if (xr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		xr[a] = min;

	return (xr);
}
