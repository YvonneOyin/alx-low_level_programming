#include "main.h"

/**
  * _islower - function to check if character is lowercase
  *
  * @i: checks input of function
  *
  * Return: 1 is lowercase, 0 otherwise
  */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
