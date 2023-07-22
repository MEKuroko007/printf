#include "main.h"

/**
  * convert_dec - Convert number to decimal and print the digits.
  * @num: The number to be converted.
  * @p: The divisor to get the most significant digit.
  * @i: Pointer to keep track of the number of digits printed.
  */
void convert_dec(int num, int p, int *i) {
    if (p == 0) {
        return;
    }

    int digit = num / p;
    _putchar(digit + '0');
    num = num - (digit * p);
    p = p / 10;
    (*i)++;
    convert_dec(num, p, i);
}

/**
  * print_dec - Print decimal number.
  * @args: Arguments containing the decimal number to be printed.
  * Return: The length of the number (number of characters printed).
  */
int print_dec(va_list args) {
    int n = va_arg(args, int);
    int num, last = n % 10;
    int i = 1;
    int p = 1;

    n = n / 10;
    num = n;

    if (last < 0) {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }

    if (num > 0) {
        while (num / 10 != 0) {
            p = p * 10;
            num = num / 10;
        }
        num = n;
        convert_dec(num, p, &i);
    }

    _putchar(last + '0');

    return i;
}

