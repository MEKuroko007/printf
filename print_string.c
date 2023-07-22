#include "main.h"
/**
 * print_string - print a string.
 * @args:args
 * Return:length of string.
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len = 0;

	if (s != NULL)
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
	}
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		len = 6;
	}

	return (len);
}

