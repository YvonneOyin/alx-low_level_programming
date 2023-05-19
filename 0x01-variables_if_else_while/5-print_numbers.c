#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints all single digit numbers of base 10 starting from 0,
  * followed by a new line.
  *
  * Return: 0 (success)
  */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
