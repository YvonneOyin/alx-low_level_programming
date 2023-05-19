#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints all possible different combinations of two digits..
  *
  * Return: 0 (success)
  */

int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (x != y && x < y)
			{
				putchar(x + '0');
				putchar(y + '0');

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
