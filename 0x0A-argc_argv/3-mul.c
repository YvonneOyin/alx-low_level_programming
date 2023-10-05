#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int n, m, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		multi = n * m;

		printf("%d\n", multi);

		return (0);
	}
}
