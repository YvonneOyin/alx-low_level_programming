#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts separated by comma, followed by space
 *
 * @n: input
 */

void print_to_98(int n)
{
	int numCount;

	if (n < 98)
	{
		for (numCount = n; numCount < 98; ++numCount)
		{
			printf("%d, ", numCount);
		}
	}
	else
	{
		for (numCount = n; numCount > 98; --numCount)
		{
			printf("%d, ", numCount);
		}
	}
	printf("98\n");
}
