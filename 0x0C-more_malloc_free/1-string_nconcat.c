#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes from s2 to be concatenated with s1
 * Return: new string which contains s1, followed by the first n
 *			bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, a, b;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	s = (char *) malloc((len_s1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < len_s1; a++)
		s[a] = s1[a];

	for (b = 0; b < n; b++)
		s[a + b] = s2[b];

	s[a + b] = '\0';

	return (s);
}
