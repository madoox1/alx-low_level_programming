#include "main.h"
/**
 * _isupper - checks if a caracter is uppercase
 * Return: 1 if uppercase 0 if not
 * @c: char to chech
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
