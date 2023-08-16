#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *_isalpha - check if character is a letter
 *Return: 1 if letter,0 otherwise
 *@c: is the char to be checked
 */

void print_to_98(int n)
{
	int i, k;
    
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i / 100 != 0)
				_putchar(i / 100 + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar(i % 10 + '0');
			
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10 && i >= 0)
			{
				_putchar(i + '0');
				if (i != 98){
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (i >= 10 && i <= 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i != 98){
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
			k = -i;
			if (k < 10 && k > 0){
				_putchar('-');
				_putchar(k + '0');
				if (k != 98){
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (k >= 10)
			{
				_putchar('-');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				if (k != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			}
		}
	}
_putchar('\n');
}
