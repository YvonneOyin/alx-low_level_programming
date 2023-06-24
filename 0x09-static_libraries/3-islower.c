#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: the Character to check
 *
 * Return: 1 if c is lowercase and 0 if upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
