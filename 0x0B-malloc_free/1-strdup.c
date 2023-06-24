#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *			 which contains a copy of the string given as a parameter.
 *
 * @str: input string to duplicate
 *
 * Return: On success, returns a pointer to the duplicated string.
 *			It returns NULL if insufficient memory was available
 *
 */
char *_strdup(char *str)
{
	int a, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
	{
		l++;
	}

	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);

	a = 0;
	while (a < l)
	{
		s[a] = str[a];
		a++;
	}

	return (s);
}
