#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: a pointer to a pointer
 * @to: a character pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
