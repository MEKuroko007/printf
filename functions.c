#include "main.h"
/**
 * _strlen - function to return lenght of char
 * @s:char
 * Return:count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
/**
 * _puts - print string
 * @str: char
 * Return: 0 success
 */
int _puts(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

