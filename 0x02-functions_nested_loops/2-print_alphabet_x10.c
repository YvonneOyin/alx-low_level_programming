#include "main.h"

/**
  * print_alphabet_x10 - use _putchar function to print the alphabet
  *
  */

void print_alphabet_x10(void)
{
	char alpha;
	int line;

	line = 0;

	while (line <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		line++;
	}
	_putchar('\n');
}
