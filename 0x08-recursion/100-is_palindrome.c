#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: the string to be considered
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * _checker - checks for a palindrome
 *
 * @s: pointer to characters
 * @l: left index
 * @r: right index
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int _checker(char *s, int l, int r)
{
	if (s[l] == s[r])
	{
		if (l > r / 2)
			return (1);
		else
			return (_checker(s, l + 1, r - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - check if string is an empty one
 *
 * @s: pointer to characters
 *
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	return (_checker(s, 0, _strlen_recursion(s) - 1));
}
