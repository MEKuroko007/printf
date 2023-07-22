#include "main.h"

/**
 * _putchar - write char to stdout
 * @c:char
 * Return:0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
