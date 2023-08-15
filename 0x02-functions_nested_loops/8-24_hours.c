#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *jack_bauer - print every minute of the day
 *Return: no return value
 *@c: is the char to be checked
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');	
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
