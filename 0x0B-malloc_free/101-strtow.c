#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int fl, d, x;

	fl = 0;
	x = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int a, j = 0, len = 0, words, s = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (s)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (s + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[j] = tmp - s;
				j++;
				s = 0;
			}
		}
		else if (s++ == 0)
			start = a;
	}

	mat[j] = NULL;

	return (mat);
}
