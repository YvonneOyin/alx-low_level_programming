#include "main.h"

/**
  * _isalpha - checks if character is a letter both lowercase or uppercase
  *
  * @a: takes input from other functions
  *
  * Return: 1 is if true else 0
  */
int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	else
		return (0);
}
