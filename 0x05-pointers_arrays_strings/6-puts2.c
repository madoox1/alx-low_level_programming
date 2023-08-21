#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int i, n;

	n = 0;
	for (i = 0; str[i] != '\0'; i++)
		n++;
	for (i = 0; i < n; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
