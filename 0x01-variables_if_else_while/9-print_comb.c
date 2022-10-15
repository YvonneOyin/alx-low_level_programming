#include <stdio.h>

/**
  * main - Entry point
  *
  * Print possible combinations
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');

	return (0);
}
