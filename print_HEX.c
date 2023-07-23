#include "main.h"
/**
 * convertX - convert number to HEx
 * @num: integer
 * @buffer: buffer to store the binary representation
 * @buffer_size: size of the buffer
 * Return: pointer to the buffer
 */
char *convertX(unsigned int num, char *buffer, int buffer_size)
{
	char *ptr = &buffer[buffer_size - 1];
	char *upp =  "0123456789ABCDEF";
	*ptr = '\0';

	do {
		*--ptr = '0' + upp[num % 16];
		num /= 16;
	} while (num != 0);

	return (ptr);
}

/**
 * print_HEX - convert numbers to HEX and print
 * @args: arguments
 * Return: the number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[50];
	char *str = convertX(num, buffer, sizeof(buffer));
	int len = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}
