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
    char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    char *s = va_arg(l, char *);

    for (j = 0; s[j]; j++)
    {
        if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
            _putchar(s[j]);
        else
        {
            for (i = 0; i <= 52; i++)
            {
                if (s[j] == rot13[i])
                    _putchar(ROT13[i]);
            }
        }
    }

    return j;
}
