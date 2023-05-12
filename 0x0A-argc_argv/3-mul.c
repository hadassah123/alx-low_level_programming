#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, e, o, len, g, dig;

	j = 0;
	e = 0;
	o = 0;
	len = 0;
	g = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && g == 0)
	{
		if (s[j] == '-')
			++e;
		if (s[j] >= '0' && s[j] <= '9')
		{
			dig = s[j] - '0';
			if (e % 2)
				dig = -dig;
			o = o * 10 + dig;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);
	return (o);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int calc, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	calc = a * b;
	printf("%d\n", calc);

	return (0);
}
