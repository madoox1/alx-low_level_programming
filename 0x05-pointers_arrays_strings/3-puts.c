#include "main.h"
/**
 * _puts - prints a string
 * Return: none
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; *(i + str) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
