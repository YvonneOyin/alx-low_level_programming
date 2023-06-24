#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returned pointer should point to a newly allocated space in memory
 *			which contains the contents of s1, followed by the contents of s2,
 *			and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int l1, l2;
	char *str;

	if (s1 != NULL)
	{
		while (s1[a] != '\0')
			a++;
	}
	if (s2 != NULL)
	{
		while (s2[b] != '\0')
		b++;
	}


	str = malloc((sizeof(char) * (a + b)) + 1);
	if (str == NULL)
		return (NULL);

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		str[l1] = s1[l1];
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		str[l1] = s2[l2];
		l1++;
	}
	str[l1] = '\0';

	return (str);
}
