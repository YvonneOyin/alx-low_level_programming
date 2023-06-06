#include "main.h"

/**
 * print_line - prints a s bytes of a buffer
 * 
 * @a: buffer to print
 *
 * @s: bytes of buffer to print
 *
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *a, int s, int l)
{
	int b, c;

	for (b = 0; b <= 9; b++)
	{
		if (b <= s)
		{
			printf("%02x", a[l * 10 + b]);
		}
		else
		{
			printf("  ");
		}
		if (b % 2)
			putchar(' ');
	}
	for (c = 0; c <= s; c++)
	{
		if (a[l * 10 + c] > 31 && a[l * 10 + c] < 127)
			putchar(a[l * 10 + c]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer to print
 *
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a = 0;

	while (a <= (size - 1) / 10 && size)
	{
		printf("%08x: ", a * 10);
		if (a < size / 10)
		{
			print_line(b, 9, a);
		}
		else
		{
			print_line(b, size % 10 - 1, a);
		}
		a++;
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
