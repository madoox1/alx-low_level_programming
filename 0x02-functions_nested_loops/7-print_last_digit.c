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
	int last;

	if (n >= 0)
	{
		last = n % 10;
		return (last);
	}
	else
	{
		last = -(n % 10) + 10;
		return (last);
	}
}
