#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *times_table - prints the 9 times table, starting with 0
 *Return: none
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0;i < 10; i++)
	{
		for (j = 0;j < 10; j++)
		{
			mult = i * j;
			if (mult < 10)
			{
				_putchar(mult + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 +'0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}	
		}
		_putchar('\n');
	}
}
