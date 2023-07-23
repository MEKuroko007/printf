#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W',
			'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W',
			'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len = _printf("%%");
	len2 = printf("%%");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("%d -- %i\n", 0x45, 0x45);
	printf("%d -- %i\n", 0x45, 0x45);
	_printf("%d -- %i\n", 0101, 0101);
	printf("%d -- %i\n", 0101, 0101);
	printf("%d -- %i\n", INT_MAX, INT_MAX);
	_printf("%d -- %i\n", INT_MAX, INT_MAX);
	printf("%d -- %i\n", INT_MIN, INT_MIN);
	_printf("%d -- %i\n", INT_MIN, INT_MIN);
	printf("%b\n", 452);
	_printf("%b\n", 452);
	printf("%b\n", 0x42);
	_printf("%b\n", 0x42);
	printf("%b\n", 0540);
	_printf("%b\n", 0540);
	printf("%b\n", 45);
	_printf("%b\n", 45);
	printf("%b\n", 0456);
	_printf("%b\n", 0456);
	printf("%b\n", 0x8A);
	_printf("%b\n", 0x8A);

	return (0);
}
