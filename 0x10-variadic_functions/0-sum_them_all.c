#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int calc = 0;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
		calc += va_arg(list, int);

	va_end(list);

	return (calc);
}
