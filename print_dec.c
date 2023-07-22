#include "main.h"
/**
  *convert_dec - convert number to decimal
  *@num:int
  *@p:int
  *@i:int pointer
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
  *print_dec - print decimal number
  *@args:arguments
  *Return:length
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
