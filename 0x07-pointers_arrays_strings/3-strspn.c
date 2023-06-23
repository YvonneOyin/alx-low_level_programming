/**
 * _strspn - gets the length of a prexif substring
 *
 * @s: pointer to string
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}
	return (i);
}
