#include "main.h"

int print_p(va_list args)
{
    char *str;
    char buffer[19];
    uintptr_t p = va_arg(args, uintptr_t);
    int count = 0;
    const char *upp = "0123456789ABCDEF";
    char *ptr = &buffer[sizeof(buffer) - 1];
    *ptr = '\0';

    if (p == 0)
    {
        return (_puts("0x0"));
    }

    do
    {
        *--ptr = upp[p % 16];
        p /= 16;
    } while (p != 0);

    str = ptr;

    count += _puts("0x");
    count += _puts(str);

    return (count);
}

