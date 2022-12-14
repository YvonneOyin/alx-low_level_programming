#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 *
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
