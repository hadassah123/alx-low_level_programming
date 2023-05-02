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
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + 1));
		if (x != (n - 1))
			printf(",");
	}
	printf("\n");
}
