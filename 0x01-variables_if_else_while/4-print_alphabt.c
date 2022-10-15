#include <stdio.h>

/**
  * main - Entry point
  *
  * print all aplhabet letters except q and e
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 113 || i == 101)
			++i;
		putchar(i);
		++i;
	}
	putchar('\n');

	return (0);
}
