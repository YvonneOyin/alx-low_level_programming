#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints all single digit numbers of base 10 starting from 0,
  * followed by a new line.
  *
  * You are not allowed to use any variable of type char
  *
  * Return: 0 (success)
  */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
