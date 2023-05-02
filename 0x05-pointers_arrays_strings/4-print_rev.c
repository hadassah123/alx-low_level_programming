#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string
 * Return: no Return
 */
void print_rev(char *s)
{
	int calc = 0;

	while (calc >= 0)
	{
		if (s[calc] == '\0')
			break;
		calc++;
	}
	for (calc--; calc >= 0; calc--)
		_putchar(s[calc]);
	_putchar('\n');
}
