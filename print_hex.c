#include "main.h"
/**
 * convertx - convert number to hex
 * @num: integer
 * @buffer: buffer to store the binary representation
 * @buffer_size: size of the buffer
 * Return: pointer to the buffer
 */
char *convertx(unsigned int num, char *buffer, int buffer_size)
{
	char *ptr = &buffer[buffer_size - 1];
	char *low =  "0123456789abcdef";
	*ptr = '\0';

	do {
		*--ptr = '0' + low[num % 16];
		num /= 16;
	} while (num != 0);

	return (ptr);
}

/**
 * print_hex - convert numbers to binary and print
 * @args: arguments
 * Return: the number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[50];
	char *str = convertx(num, buffer, sizeof(buffer));
	int len = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}
