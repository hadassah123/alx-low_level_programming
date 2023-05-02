#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * inclluding the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int calc = 0;

	while (calc >= 0)
	{
		*(dest + calc) = *(src + calc);
		if (*(src + calc) == '\0')
			break;
		calc++;
	}
	return (dest);
}
