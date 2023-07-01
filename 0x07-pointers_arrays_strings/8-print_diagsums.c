#include "main.h"

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, siz1, siz2;

	siz1 = 0;
	siz2 = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			siz1 = siz1 + a[i];
		if (i % (size - 1) == 0 && i != 0 && i < (size * size) - 1)
			siz2 = siz2 + a[i];
		i++;
	}
	printf("%d, %d\n", siz1, siz2);
}
