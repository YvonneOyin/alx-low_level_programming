#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int count, point;
	char c;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	point = 0;
	while (point < count / 2)
	{
		c = s[point];
		s[point] = s[count - 1 - point];
		s[count - 1 - point] = c;
		point++;
	}
}
