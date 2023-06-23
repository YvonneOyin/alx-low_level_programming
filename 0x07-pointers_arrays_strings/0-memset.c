/**
 * _memset - fills the memory with a constant byte
 *
 * *s: character type pointer
 * b: character type
 * n: an unsigned int type
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
