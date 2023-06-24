#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
};

#endif /* _MAIN_H */
