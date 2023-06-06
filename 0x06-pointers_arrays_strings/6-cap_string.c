#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @n: pointer to char input array
 *
 * Return: @n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (i == 0)
			{
				n[i] = n[i] - 32;
			}
			if (n[i - 1] == 32 || n[i - 1] == 9 || n[i - 1] == 10 ||
			    n[i - 1] == 44 || n[i - 1] == 59 || n[i - 1] == 46 ||
			    n[i - 1] == 33 || n[i - 1] == 63 || n[i - 1] == 34 ||
			    n[i - 1] == 40 || n[i - 1] == 41 || n[i - 1] == 123 ||
			    n[i - 1] == 124)
			{
				n[i] = n[i] - 32;
			}
		}
		i++;
	}
	return (n);
}
