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
	int li, i;
	char ch;

	for (li = 0; s[li] != '\0'; ++li)
		;

	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[li - 1 - i];
		s[li - 1 - i] = ch;
	}
