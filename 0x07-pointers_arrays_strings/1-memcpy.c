/**
 * _memcpy - Copies memory area
 *
 * @dest: where btyes are copied to
 * @src: where bytes are copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
