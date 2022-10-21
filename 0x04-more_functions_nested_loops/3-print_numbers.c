#include "main.h"

/**
 * print_numbers - print 0 - 9 only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	/* local variable definition */
	int number = 0;

	/* do loop execution */
	do {
		_putchar(number + 48);
		number++;
	} while (number >= 0 && number <= 9);
	_putchar('\n');
}
