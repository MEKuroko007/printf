#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - format
 * @s:char
 * @f:pointer to function
 */

typedef struct specifier
{
	char *s;
	int (*f)();
} sp;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int _strlen(char *s);
int print_char(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_dec(va_list args);


#endif
