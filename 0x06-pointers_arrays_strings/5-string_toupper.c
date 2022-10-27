#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 *
 * @d : pointer to input char
 *
 * Return: @d
 */

char *string_toupper(char *d)
{
	int i = 0;

	while (d[i] != '\0')
	{
		if (d[i] >= 'a' && d[i] <= 'z')
			d[i] -= 32;
		i++;
	}
	return (d);
}
