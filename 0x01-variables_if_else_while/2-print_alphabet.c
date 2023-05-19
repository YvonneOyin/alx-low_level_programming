#include <stdio.h>

/**
  * main -Entry point
  *
  * A program that prints the alphabet in lowercase, followed by a new line.
  *
  * Return: 0 (success)
  */

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
