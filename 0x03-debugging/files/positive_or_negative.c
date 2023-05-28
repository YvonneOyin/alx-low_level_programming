#include "main.h"

/**
* main - Entry point
*
* positive_or_negative: print value of i status; zero, positive or negative
*
* Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	/*my code*/
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%i is negative\n", i);
	}
}
