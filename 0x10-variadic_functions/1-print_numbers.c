#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  prints numbers followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	int i;
	va_list list;

	va_start(list, n);

	for (num = 0; num < n; num++)
	{
		i = va_arg(list, int);

		if (num > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", i);
	}
	printf("\n");

	va_end(list);
}
