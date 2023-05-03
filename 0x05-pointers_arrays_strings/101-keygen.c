#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen
 * Return: 0 Always
 */
int main(void)
{
	char pass[84];
	int i = 0, calc = 0, diff_half1, diff_half2;

	srand(time(0));

	while (calc < 2772)
	{
		pass[i] = 33 + rand() % 94;
		calc += pass[i++];
	}

	pass[i] = '\0';

	if (calc != 2772)
	{
		diff_half1 = (calc - 2772) / 2;
		diff_half2 = (calc - 2772) / 2;
		if ((calc - 2772) % 2 != 0)
			diff_half1++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_half1))
			{
				pass[i] -= diff_half1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_half2))
			{
				pass[i] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", pass);
	return (0);
}
