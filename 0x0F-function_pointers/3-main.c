#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, r;
	char k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	k = *argv[2];

	if ((k == '/' || k == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = func(ar1, ar2);

	printf("%d\n", r);

	return (0);
}
