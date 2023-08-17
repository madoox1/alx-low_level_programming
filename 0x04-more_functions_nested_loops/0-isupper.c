#include "main.h"
/**
 * main - checks if a caracter is uppercase
 * return : 1 if uppercase 0 if not
 * @c : char to chech
 */
int _isupper(int c)
{
	if (c <='Z' && c >= 'A')
		return (1);
	else
		return (0);
}
