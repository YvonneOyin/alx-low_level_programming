#include <stdio.h>
/**
  * main - Entry point
  *
  * print 0-9 with int variable while using putchar
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
