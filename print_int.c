#include "main.h"
/**
 *convert_int - convert number
 *@num:int
 *@p:int
 *@i:int pointer
 */

void convert_int(int num, int p, int *i)
{
	int digit;

	if (p == 0)
	{
		return;
	}

	digit = num / p;

	_putchar(digit + '0');
	num = num - (digit * p);
	p = p / 10;
	(*i)++;
	convert_int(num, p, i);
}
/**
 *print_int - print integer number
 *@args:arguments
 *Return:length
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10;
	int i = 1;
	int p = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			p = p * 10;
			num = num / 10;
		}
		num = n;
		convert_int(num, p, &i);
	}

	_putchar(last + '0');

	return (i);
}
