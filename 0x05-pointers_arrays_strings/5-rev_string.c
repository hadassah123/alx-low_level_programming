#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */
void rev_string(char *s)
{
	int calc =  0, index = 0;
	char tmp;

	while (s[index++])
		calc++;

	for (index = calc - 1; index >= calc / 2; index--)
	{
		tmp = s[index];
		s[index] = s[calc - index - 1];
		s[calc - index - 1] = tmp;
	}
}
