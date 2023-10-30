#include "3-calc.h"
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 *
 * @argc: argument count
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int x, y;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argc[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", op(x, y));
	return (0);
}
