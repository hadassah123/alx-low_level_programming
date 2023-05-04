#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int l, e, calc;

	if (n < 0)
	{
		_putchar(45);
		l = n * -1;
	}
	else
	{
		l = n;
	}

	e = l;
	calc =  1;

	while (e > 9)
	{
		e /= 10;
		calc *= 10;
	}

	for (; calc >= 1; calc /= 10)
	{
		_putchar(((l / calc) % 10) + 48);
	}
}
