#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}

	return (0);
}
