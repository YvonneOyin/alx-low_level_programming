#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @d: pointer to char input array
 *
 * Return: @d
 */

char *cap_string(char *d)
{
	int i = 0;

	while (d[i] != '\0')
	{
		if (d[i] >= 97 && d[i] <= 122)
		{
			if (i == 0)
			{
				d[i] -= 32;
			}
			if (d[i - 1] == 32 || d[i - 1] == 9 || d[i - 1] == 10 ||
			    d[i - 1] == 44 || d[i - 1] == 59 || d[i - 1] == 46 ||
			    d[i - 1] == 33 || d[i - 1] == 63 || d[i - 1] == 34 ||
			    d[i - 1] == 40 || d[i - 1] == 41 || d[i - 1] == 123 ||
			    d[i - 1] == 124)
			{
				d[i] -= 32;
			}
		}
		i++;
	}
	return (d);
}
