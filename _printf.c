#include "main.h"
/**
 * _printf - function to print something
 * @format:format
 * Return:length
 */
int _printf(const char *format, ...)
{
	sp array[] = {
		{"%c", print_char}, {"%s", print_string},
		{"%%", print_percent}, {"%i", print_int},
		{"%d", print_dec}, {"%b", print_bin},
		{"%u", print_uns}, {"%x", print_hex},
		{"%X", print_HEX}, {"%o", print_oct},
		{"%R", print_rot13}, {"%S", print_S},
		{"%r", print_r}, {"%p", print_p},
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		int found = 0;

		j = 12;
		while (j >= 0)
		{
			if (array[j].s[0] == format[i] && array[j].s[1] == format[i + 1])
			{
				len += array[j].f(args);
				i = i + 2;
				found = 1;
				break;
			}
			j--;
		}
		if (!found)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
