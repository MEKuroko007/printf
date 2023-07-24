#include "main.h"
/**
 *convertHEX - fucntion to ocnvert number to hexadecimal
 * @c:char
 * @buffer: buffer to store the binary representation
 * @buffer_size: size of the buffer
 * Return: pointer to the buffer
 */
char *convertHEX(char c, char *buffer, int buffer_size)
{
	char *upp = "0123456789ABCDEF";
	unsigned int num = (unsigned int)c;
	char *ptr = &buffer[buffer_size - 1];
	*ptr = '\0';

	do {
		*--ptr = upp[num % 16];
		num /= 16;
	} while (num != 0);

	return (ptr);
}
/**
 * print_S - non printable characte
 * @args:arguments
 * Return:length of string
 */

int print_S(va_list args)
{
	char *s = va_arg(args, char *);
	char buffer[49];
	int len;

	if (!s)
		s = "(null)";

	len = 0;

	for (; *s; s++)
	{
		if (*s < 32 || *s >= 127)
		{
			len += _putchar('\\') + _putchar('x');
			convertHEX(*s, buffer, sizeof(buffer));
			len++;
		} else
		{
			len += _putchar(*s);
		}
	}

	return (len);
}

