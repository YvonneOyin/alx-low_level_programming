#include "main.h"

/**
 * _isalpha - checks for alphabeth
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
