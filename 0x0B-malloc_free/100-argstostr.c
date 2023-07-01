#include "main.h"

/**
 * *argstostr - concatenates all the arguments
 *
 * @ac: an integer type
 * @av: a character pointer to pointer
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, len, x;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	x = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[x] = av[a][b];
			x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';

	return (s);
}
