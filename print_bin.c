#include "main.h"

/**
 *convert - convert bin
 *@num:integer
 *Return:result
 */
char *convert(int num)
{
	if (num == 0)
	{
		char *result = malloc(2 * sizeof(char));

		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	else
	{
		int rem = num % 2;
		char *partial_result = convert(num / 2);
		int len = _strlen(partial_result);
		char *result = malloc((len + 2) * sizeof(char));

		result[0] = rem + '0';
		_strcpy(result + 1, partial_result);
		free(partial_result);
		return (result);
	}
}

/**
 *print_bin - prints a number in base 2
 *@args:arguments
 *Return:count
 */
int print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num);
	char *strP = str;
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	free(strP);
	return (count);
}

