#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to the string whose length is to be found
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int g = 0;

	while (*(s + g) != 0)
	{
		g++;
	}
	return (g);
}
