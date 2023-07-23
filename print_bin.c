#include "main.h"
/**
 *convert - convert number
 *@num:integer
 *Return:pointer
 */
char *convert(int num)
{
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = '0' + (num % 2);
		num /= 2;
	} while (num != 0);

	return (ptr);
}
/**
 *print_bin - convert numbers to binary
 *@args:arguments
 *Return:print numbers as string
 */
int print_bin(va_list args)
{
	int num = va_arg(args, int);
	char *str;
	str = convert(num);

	return (_puts(str));
}

