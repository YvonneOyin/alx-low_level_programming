#include"main.h"

/**
 * numLength - returns the length of string
 *
 * @number: operand number
 *
 * Return: number of digits
 */

int numLength(int number)
{
	int length = 0;

	if (!number)
		return (1);
	while (number)
	{
		number = number / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Solution was copied from iAmG-r00t
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, initials;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, fo1 = 0, fo2 = 0, sumo = 0;

	for (count = 1; count <= 98; ++count)
	{
		if (fo1 > 0)
			printf("%lu", fo1);
		initials = numLength(mx) - 1 - numLength(f1);

		while (fo1 > 0 && initials > 0)
		{
			printf("%d", 0);
			--initials;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = fo1 + fo2 + (f1 + f2) / mx;
		f1 = f2;
		fo1 = fo2;
		f2 = sum;
		fo2 = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

