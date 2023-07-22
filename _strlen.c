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
