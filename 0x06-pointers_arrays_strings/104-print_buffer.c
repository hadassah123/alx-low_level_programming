#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int m, n, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", m);

			for (n = m; n < m + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", *(b + n));
				else
					printf(" ");
			}
			printf(" ");
			for (l = m; l < m + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) <  32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
