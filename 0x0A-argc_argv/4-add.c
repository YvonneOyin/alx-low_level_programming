#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] > '9' || argv[n][m] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n]);
	}
	printf("%d\n", sum);

	return (0);
}
