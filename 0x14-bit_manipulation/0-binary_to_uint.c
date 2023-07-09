#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL
 *			0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	/* if b is NULL */
	if (!b)
		return (0);

	/* while b is not NULL */
	while (*b != '\0')
	{
		/* if there is a character in b that is not 0 or 1 */
		if (*b != '0' && *b != '1')
			return (0);
		/* left-shifts the num value by 1, then adds it the binary b to it. */
		num = (num << 1) + (*b - '0');
		b++; /* increments to the next character in the string. */
	}
	return (num);
}
