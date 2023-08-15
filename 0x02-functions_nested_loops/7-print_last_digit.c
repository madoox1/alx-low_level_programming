#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *print_last_digit - prints last degit of a number
 *Return: last digit
 *@n: is the char to be checked
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
