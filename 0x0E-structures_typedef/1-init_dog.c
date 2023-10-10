#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: the input pointer to the struct dog
 * @name: dog's name input
 * @age: dog's age input
 * @owner: dog's owner name input
 *
 * Return: nothing (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
