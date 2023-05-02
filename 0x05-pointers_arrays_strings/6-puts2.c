#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int calc = 0;

	while (calc >= 0)
	{
		if (str[calc] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (calc % 2 == 0)
			_putchar(str[calc]);
		calc++;
	}
}
