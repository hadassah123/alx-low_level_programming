#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int m, n;

	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[m] == a[n])
			{
				s[m] = b[n];
				break;
			}
		}
	}
	return (s);
}
