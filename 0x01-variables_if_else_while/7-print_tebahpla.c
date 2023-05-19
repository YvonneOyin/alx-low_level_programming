#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints the lowercase alphabet in reverse, then a new line
  *
  * Return: 0 (success)
  */

int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		--a;
	}
	putchar('\n');

	return (0);
}
