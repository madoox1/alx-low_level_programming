#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet_x10(void)
{
        int i, j;
	for(j = 0;j < 10; j++)
	{
        	for(i = 0;i < 26; i++)
                	_putchar('a' + i);
        	_putchar('\n');
	}
}
