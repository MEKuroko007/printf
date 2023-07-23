#include "main.h"
/**
 * printDigits - recursion function
 * @n:int
 * Return:number of characters
 */


int printDigits(int n)
{
	int count;

	if (n == 0)
	{
		return (0);
	}
	count = printDigits(n / 10);

	_putchar('0' + n % 10);
	return (count + 1);
}
/**
 * print_int - prints integer
 * @args:argument
 * Return:number of characters
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += printDigits(num);
	}

	return (count);
}
