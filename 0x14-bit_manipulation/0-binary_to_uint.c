#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a character pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if:
 *			there is one or more chars in the string b that is not 0 or 1
 *			b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			uint = (uint << 1) | (b[i] - '0');
		}
		else
			return (0);
	}

	return (uint);
}
