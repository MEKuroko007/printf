#include "main.h"
/**
 * convertOct - convert numbers to octal and print
 * @num: integer
 * @buffer: buffer to store the binary representation
 * @buffer_size: size of the buffer
 * Return: pointer to the buffer
 */
char *convertOct(unsigned int num, char *buffer, int buffer_size)
{
	char *ptr = &buffer[buffer_size - 1];
	*ptr = '\0';

	do {
		*--ptr = '0' + (num % 8);
		num /= 8;
	} while (num != 0);

	return (ptr);
}

/**
 * print_oct - convert numbers to octal and print
 * @args: arguments
 * Return: the number of characters printed
 */
int print_oct(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[50];
	char *str = convertOct(num, buffer, sizeof(buffer));
	int len = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}
