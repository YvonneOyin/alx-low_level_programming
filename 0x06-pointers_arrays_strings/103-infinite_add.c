#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 *
 * @n2: second number
 *
 * @r: buffer for result
 *
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, e, f;

	a = 0;
	while (n1[a])
		a++;
	b = 0;
	while (n2[b])
		b++;
	if (a > size_r || b > size_r)
		return (0);
	d = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		e = d;
		if (a >= 0)
		{
			e = e + (n1[a] - '0');
		}
		if (b >= 0)
		{
			e = e + (n2[b] - '0');
		}
		if (a < 0 && b < 0 && e == 0)
			break;
		d = e / 10;
		r[c] = e % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || d)
		return (0);
	for (c -= 1, f = 0; f < c; c--, f++)
	{
		d = r[c];
		r[c] = r[f];
		r[f] = d;
	}
	return (r);
}
