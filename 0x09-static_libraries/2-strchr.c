#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: a string
 * @c: character to locate from string
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	return ('\0');
}
