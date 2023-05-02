#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: no Return
 */
void puts_half(char *str)
{
	int calc = 0, i;

	while (calc >= 0)
	{
		if (str[calc] == '\0')
			break;
		calc++;
	}
	if (calc % 2 == 1)
		i  = calc / 2;
	else
		i = (calc - 1) / 2;

	for (i++; i < calc; i++)
		_putchar(str[i]);
	_putchar('\n');
}
