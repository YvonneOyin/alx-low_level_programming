#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int lastDig;

	if (i < 0)
	{
		lastDig = -1 * (i % 10);
	}
	else
	{
		lastDig = i % 10;
	}
	_putchar(lastDig + '0');

	return (lastDig);
}
