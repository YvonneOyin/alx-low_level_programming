#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10)
				cents = cents - 10;
			else if (cents >= 5)
				cents = cents - 5;
			else if (cents >= 2)
				cents = cents - 2;
			else if (cents >= 1)
				cents = cents - 1;

			num = num + 1;
		}
	}
	printf("%d\n", num);
	return (0);
}
