#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	int l, m, n, len, f, digit;

	l = 0;
	m = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (l < len && f == 0)
	{
		if (s[l] == '_')
			++m;
		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			f = 0;
		}
		l++;
	}

	if (f == 0)
		return (0);

	return (n);
}
