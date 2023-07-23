#include "main.h"
/**
 * convertDec - convert number to decimal
 * @num: integer
 * @buffer: buffer to store the binary representation
 * @buffer_size: size of the buffer
 * Return: pointer to the buffer
 */
char *convertDec(unsigned int num, char *buffer, int buffer_size)
{
	char *ptr = &buffer[buffer_size - 1];
	*ptr = '\0';

	do {
		*--ptr = '0' + (num % 10);
		num /= 10;
	} while (num != 0);

	return (ptr);
}
/**
 *print_uns - prrint unsigned integer
 *@args:argumentts
 *Return: the number of characters printed
 */
int print_uns(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[50];
	char *str = convertDec(num, buffer, sizeof(buffer));
	int len = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}
}
