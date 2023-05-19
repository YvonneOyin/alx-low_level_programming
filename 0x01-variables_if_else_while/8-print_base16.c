#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints all the numbers of base 16 in lowercase then new line
  *
  * Return: 0
  */

int main(void)
{
	int h = 0;

	while (h < 16)
	{
		if (h < 10)
		{
			putchar(h + '0');
		}
		else
		{
			putchar('a' + (h - 10));
		}
		h++;
	}
	putchar('\n');

	return (0);
}
