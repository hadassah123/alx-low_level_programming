#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @r_index: current buffer index
 * Return: a pointer to the result
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int calc, t = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		calc = (*n1 - '0') + (*n2 - '0');
		calc += t;
		*(r + r_index) = (calc % 10) + '0';
		t = calc / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		calc = (*n1 - '0') + t;
		*(r + r_index) = (calc % 10) + '0';
		t = calc / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		calc = (*n2 - '0') + t;
		*(r + r_index) = (calc % 10) + '0';
		t = calc / 10;
	}
	if (t && r_index >= 0)
	{
		*(r + r_index) = (t % 10) + '0';
		return (r + r_index);
	}

	else if (t && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the fuction stores the result
 * @size_r: the size of the buffer
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_cal = 0, n2_cal = 0;

	for (i = 0; *(n1 + i); i++)
		n1_cal++;

	for (i = 0; *(n2 + 1); i++)
		n2_cal++;

	if (size_r <= n1_cal + 1 || size_r <= n2_cal + 1)
		return (0);

	n1 += n1_cal - 1;
	n2 += n2_cal - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
