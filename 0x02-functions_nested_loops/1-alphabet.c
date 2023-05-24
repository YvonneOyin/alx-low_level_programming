#include "main.h"

/**
 * print_alphabet - use _putchar to print the alphabets a - z
 *
 * Return: 0 to indicate success
 */
void print_alphabet(void)
{
	char alphbet = 97;

	while (alphbet <= 122)
	{
		_putchar(alphbet);
		alphbet++;
	}
	_putchar('\n');
}
