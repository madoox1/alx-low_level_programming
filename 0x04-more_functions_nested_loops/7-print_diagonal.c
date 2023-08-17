#include "main.h"
/**
 * print_diagonal- print diagonale
 * Return: none
 * @n: number of time \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;
if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < i)
				_putchar(' ');
			else if (i == j)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
else
	_putchar('\n');
}
