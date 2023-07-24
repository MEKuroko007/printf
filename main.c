#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
/*	int x = 0;
	int *p = &x;*/
	int len_1, len_2;


	/* ===========> %o <=========== */
	printf("----------------------\n");
	printf("----> OCTAL CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%o\n", 0);
	len_2 = _printf("%o\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%o\n", 255);
	len_1 = _printf("%o\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%o\n", UINT_MAX);
	len_2 = _printf("%o\n", UINT_MAX);
	assert(len_1 == len_2);

	/* ===========> %x <=========== */
	printf("----------------------\n");
	printf("-----> hex CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%x\n", 0);
	len_2 = _printf("%x\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%x\n", 255);
	len_1 = _printf("%x\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%x\n", UINT_MAX);
	len_2 = _printf("%x\n", UINT_MAX);
	assert(len_1 == len_2);

	/* ===========> %X <=========== */
	printf("----------------------\n");
	printf("-----> HEX CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%X\n", 0);
	len_2 = _printf("%X\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%X\n", 255);
	len_1 = _printf("%X\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%X\n", UINT_MAX);
	len_2 = _printf("%X\n", UINT_MAX);
	assert(len_1 == len_2);

	/* ===========> %p <=========== */
	printf("----------------------\n");
	printf("----> ADDRS CASES <---\n");
	printf("----------------------\n");

/*	len_1 = printf("%p\n", p);
	len_2 = _printf("%p\n", p);
	assert(len_1 == len_2);*/
	/* ===========> %S <=========== */
	printf("----------------------\n");
	printf("------> S CASES <-----\n");
	printf("----------------------\n");
	/* Test 1: Argument with non-printable characters */
	len_1 = printf("Expected output:   Best\\x0ASchool\n");
	len_2 = _printf("Current output:    %S\n", "Best\nSchool");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:   Hello\\x09World\\x0A\n");
	len_2 = _printf("Current output:    %S\n", "Hello\tWorld\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 2: Argument with only printable characters */
	len_1 = printf("Expected output:   %s\n", "Hello World!");
	len_2 = _printf("Current output:    %S\n", "Hello World!");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 3: Empty argument */
	len_1 = printf("Expected output:   %s\n", "");
	len_2 = _printf("Current output:    %S\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 4: NULL argument */
	len_1 = printf("Expected output:   %s\n", NULL);
	len_2 = _printf("Current output:    %S\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	

	return (0);
}
