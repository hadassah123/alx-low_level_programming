#include "main.h"

/**
 * get_endianness - examines endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
