#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if  (x == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
