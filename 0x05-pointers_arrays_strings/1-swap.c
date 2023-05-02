#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @m: int m
 * @k: int k
 */
void swap_int(int *m, int *k)
{
	int q;

	q = *m;
	*m = *k;
	*k = q;
}
