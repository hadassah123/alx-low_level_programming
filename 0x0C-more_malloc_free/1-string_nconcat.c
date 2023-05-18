#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int as1, as2, asout, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (as1 = 0; s1[as1] != '\0'; as1++)
		;

	for (as2 = 0; s2[as2] != '\0'; as2++)
		;

	if (n > as2)
		n = as2;

	asout = as1 + n;

	out = malloc(asout + 1);

	if (out == NULL)
		return (NULL);

	for (a = 0; a < asout; a++)
		if (a < as1)
			out[a] = s1[a];
		else
			out[a] = s2[a - as1];

	out[a] = '\0';

	return (out);
}
