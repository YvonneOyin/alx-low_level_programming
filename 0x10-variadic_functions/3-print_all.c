#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing (void)
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					n++;
					continue;
			}
			separator = ", ";
			n++;
		}
	}
	printf("\n");

	va_end(list);
}
