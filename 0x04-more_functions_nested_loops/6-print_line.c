#include "main.h"
/**
 * print_line- prints '-' n times
 * Return: none
 * @n: number of time to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('-');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
