/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to string being searched for
 *
 * Return: pointer to the byte in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
