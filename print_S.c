#include "main.h"
/**
 * convertHEX - function to convert number to hexadecimal
 * @c: char
 * Return: pointer to the buffer
 */
char *convertHEX(unsigned int num)
{
	static char buffer[50];
	const char *digits = "0123456789ABCDEF";
	char *ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = digits[num % 16];
		num /= 16;
	} while (num != 0 && ptr > buffer);

	return ptr;
}
/**
 * print_S - non-printable character
 * @args: arguments
 * Return: length of string
 */
int print_S(va_list args)
{
    int i, count = 0;
    char *res;
    char *s = va_arg(args, char *);

    if (!s)
        return (_puts("(null)"));

    for (i = 0; s[i]; i++)
    {
        if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
        {
            _puts("\\x");
            count += 2;
            res = convertHEX(s[i]);
            if (!res[1])
                count += _putchar('0');
            count += _puts(res);
        }
        else
            count += _putchar(s[i]);
    }

    return count;
}

