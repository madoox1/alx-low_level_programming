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
		for (j = 0;j < 0; j++)
		{
			mult = i * j;
			_putchar(mult);
			_putchar(',');
			_putchar(' ');
		}
	}
}
