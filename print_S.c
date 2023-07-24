#include "main.h"
/**
 * printf_S - non printable character
 * @args:arguments
 * Return:length of string
 */

int print_S(va_list args) {
    char *s = va_arg(args, char *);

    if (!s)
        s = "(null)";

    int len = 0;

    for (; *s; s++) {
        if (*s < 32 || *s >= 127) {
            len += _putchar('\\') + _putchar('x');
            len += print_HEX(*s);
        } else {
            len += _putchar(*s);
        }
    }

    return len;
}