#include "main.h"

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string of characters to concatenates
 * @s2: second string of characters to concatenates
 *
 * Return: a pointer to a newly allocated space in memory or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int a = 0, b = 0, len = 0, len1 = 0;

	while (s1[len] != '\0')
		len++;
	while (s2[len1] != '\0')
		len1++;

	con = malloc(sizeof(char) * (len + len1 + 1));
	if (con == NULL)
		return (NULL);

	if (s1 != 0)
	{
		while (a < len)
		{
			con[a] = s1[a];
			a++;
		}
	}

	if (s2 != 0)
	{
		while (a < (len + len1))
		{
			con[a] = s2[b];
			a++;
			b++;
		}
	}
	con[a] = '\0';

	return (con);
}
