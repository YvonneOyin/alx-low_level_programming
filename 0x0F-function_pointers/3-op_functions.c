#include "3-calc.h"

/**
 * op_add - the sum of two numbers
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - the substraction of two numbers
 * @a: The first int
 * @b: The second int
 *
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: multiplication of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Returns the division of two numbers.
 *
 * @a: The first int.
 * @b: The second int.
 *
 * Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
