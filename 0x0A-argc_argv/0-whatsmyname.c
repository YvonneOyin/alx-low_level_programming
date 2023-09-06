#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
