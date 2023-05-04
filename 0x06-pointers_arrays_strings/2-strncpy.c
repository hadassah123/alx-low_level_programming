#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes to dest
 * Return: the pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int start = 0, calc = 0;

	while (src[start++])
		calc++;

	for (start = 0; src[start] && start < n; start++)
		dest[start] = src[start];

	for (start = calc; start < n; start++)
		dest[start] = '\0';

	return (dest);
}
