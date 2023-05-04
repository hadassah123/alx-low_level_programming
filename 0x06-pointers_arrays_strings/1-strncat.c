#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src.
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int first;
	int second;

	first = 0;
	while (dest[first] != '\0')
	{
		first++;
	}

	second = 0;
	while (second < n && src[second] != '\0')
	{
		dest[first] = src[second];
		first++;
		second++;
	}
	dest[first] = '\0';

	return (dest);
}
