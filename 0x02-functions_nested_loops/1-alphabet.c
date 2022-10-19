#include "main.h"

/**
  * print_alphabet - use _putchar function to print the alphabet a - z
  *
  * Return:0
  */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
