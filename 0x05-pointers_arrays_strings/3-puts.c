#include "main.h"

/**
 * _puts - puts a string followed by a new line
 * @str: inputs string
 * Return: no Return
 */
void _puts(char *str)
{
	int calc = 0;

	while (calc >= 0)
	{
		if (str[calc] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[calc]);
		calc++;
	}
}
