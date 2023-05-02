#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers
 * @a: input array
 * @n: input n elements
 * Return: no Return
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(",");
	}

	printf("\n");
}
