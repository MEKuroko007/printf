#include "main.h"
/**
 * print_r - prints a string in reverse
 * @args:argument
 * Return: length of the printed string
 */
int print_r(va_list args)
{
	char *s = va_arg(args, char *);
	int length;
	int i;

	if (!s)
		s = "(null)";

	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	return (length);
}

