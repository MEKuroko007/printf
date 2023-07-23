#include "main.h"
/**
 * print_rot13 - print rot13 algorithm
 * @args:arguments
 * Return: count
 *
 */
int print_rot13(va_list args)
{
	int i, j;
	char first[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char second[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(args, char*);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == first[i])
				{
					_putchar(second[i]);
					count++;
					break;
				}
			}
		}
	}

	return (count);
}
