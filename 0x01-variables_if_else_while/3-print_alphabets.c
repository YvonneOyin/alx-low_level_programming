#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints the alphabet in lowercase, and then in uppercase, \
followed by a new line.
  *
  * Return: 0 (success)
  */

int main(void)
{
	char A, a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	A = 65;

	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
