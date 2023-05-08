#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int calc1, calc2, x;

	calc1 = 0;
	calc2 = 0;

	for (x = 0; x < size; x++)
	{
		calc1 = calc1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		calc2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", calc1, calc2);
}
