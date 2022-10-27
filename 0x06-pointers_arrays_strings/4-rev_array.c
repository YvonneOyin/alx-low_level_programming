#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp, size;

	size = (n / 2) + (n % 2);
	for (i = 0; i < size; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
