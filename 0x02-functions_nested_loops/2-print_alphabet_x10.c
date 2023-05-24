#include "main.h"

/**
 * print_alphabet_x10 - use _putchar function to print the alphabet
 */
void print_alphabet_x10(void)
{
	char alphbet;
	int line = 0;

	while (line < 10)
	{
		alphbet = 97;
		while (alphbet <= 122)
		{
			_putchar(alphbet);
			alphbet++;
		}
		line++;

		_putchar('\n');
	}
}
