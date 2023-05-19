#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints the alphabet in lowercase, followed by a new line.
  *
  * Print all the letters except q and e
  *
  * Return: 0 (success)
  */

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
