#include "main.h"
/**
 * print_line- prints - n times
 * Return: none
 * @n: number of time to print
 */
void print_line(int n)
{
	int i;
if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
else
	_putchar('\n');
}
