#include"main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 *
 * @a: array to be printed
 *
 * @n: number of elements to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int num;

	num = 0;
	while (num < n)
	{
		if (num != (n - 1))
		{
			printf("%d, ", a[num]);
		}
		else
		{
			printf("%d", a[num]);
		}
		num++;
	}
	printf("\n");
}
