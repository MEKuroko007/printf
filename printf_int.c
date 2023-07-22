#include "main.h"
/**
 * printf_int - prints integer
 * @args:argument
 * Return:number of characters
 */


int printDigits(int n) {
    if (n == 0) {
        return 0;
    }
    int count = printDigits(n / 10);
    _putchar('0' + n % 10);
    return count + 1;
}
int print_int2(va_list args)
{
  int num = va_arg(args, int);
  int count = 0;
  if (num < 0) {
      _putchar('-');
      num = -num;
      count++;
  }
  if (num == 0) {
      _putchar('0');
      count++;
  }else{
      count += printDigits(num);
  }

    return count;
}
