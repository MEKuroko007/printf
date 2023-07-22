#include "main.h"

/**
 * print_char - prints a char.
 * @args:argumnts
 * Return: 1.
 */
int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}

