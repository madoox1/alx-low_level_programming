#include "main.h"
/**
 * print_rev - prints a string in inverse
 * Return: none
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	for (i = 0 ; s[i] != '\0'; i++)
		n++;
	for (i = n; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

