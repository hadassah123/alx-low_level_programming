#include "main.h"
#include <stdio.h>

/**
 * infinte_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the fuction stores the result
 * @size_r: the size of the buffer
 * Return: the pointer to dest
 */
char *infinte_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, mm, nn, k1, k2, calc = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		nn = a1;
	else
		nn = a2;
	if (size_r <= nn + 1)
		return (0);
	r[nn + 1] = '\0';
	a1--, a2--, size_r--;
	k1 = *(n1 + a1) - 48, k2 = *(n2 + a2) - 48;
	while (nn >= 0)
	{
		mm = k1 + k2 + calc;
		if (mm >= 10)
			calc = mm / 10;
		else
			calc = 0;
		if (mm > 0)
			*(r + nn) = (mm % 10) + 48;
		else
			*(r + nn) = '0';
		if (a1 > 0)
			a1--, k1 = *(n1 + a1) - 48;
		else
			k1 = 0;
		if (a2 > 0)
			a2--, k2 = *(n2 + a2) - 48;
		else
			k2 = 0;
		nn--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
