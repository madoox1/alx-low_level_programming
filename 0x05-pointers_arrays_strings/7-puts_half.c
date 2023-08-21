#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print half of it
 */
void puts_half(char *str)
{
	int i, n;

	n = 0;
	for (i = 0; str[i]; i++)
		n++;
	if (n % 2 != 0)
		_putchar(str[(n - 1) / 2]);
	else
	{
		for (i = n / 2 ; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
