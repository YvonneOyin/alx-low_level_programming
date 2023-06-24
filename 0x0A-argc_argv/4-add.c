#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 *
 * @argc: counts the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *sign;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &sign, 10);
		if (*sign)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
