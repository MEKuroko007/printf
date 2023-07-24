#include "main.h"
/**
 * convertX - convert number to HEX
 * @num: integer to be converted
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
		*--ptr = upp[num % 16];
		num /= 16;
	} while (num != 0);

	return (ptr);
}
/**
 * print_p - print  an address by  HEX format
 * @args:arguments
 * Return:length
 */
int print_p(va_list args)
{
	char *str;
	char buffer[49];
	int p = va_arg(args, int);
	int count = 0;

	if (!p)
		return (_puts("(null)"));

	str = convertX(p, buffer, sizeof(buffer));
	count += _puts("0x");
	count += _puts(str);

	return (count);
}
