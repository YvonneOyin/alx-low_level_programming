#include<stdio.h>

/**
  * main - Entry point
  *
  * print 0-9 using putchar
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		++num;
	}
	putchar('\n');

	return (0);
}
