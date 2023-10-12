#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	char *str;
	va_list list;

	va_start(list, n);
	for (num = 0; num < n; num++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (num != n - 1 && separator)
        {
            printf("%s", separator);
        }
	}
	va_end(list);

	printf("\n");
}
