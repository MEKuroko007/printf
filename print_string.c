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
		_putchar('N');
		_putchar('U');
		_putchar('L');
		_putchar('L');
		len = 4;
	}

	return (len);
}

