#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *print_sign - check the signe of a number
 *Return: 1 if positif, 0 if null, -1 if negative
 *@n: is the number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
