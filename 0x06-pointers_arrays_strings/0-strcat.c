#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int calc = 0, calc2 = 0;

	while (*(dest + calc) != '\0')
	{
		calc++;
	}

	while (calc2 >= 0)
	{
		*(dest + calc) = *(src + calc2);
		if (*(src + calc2) == '\0')
			break;
		calc++;
		calc2++;
	}
	return (dest);
}
