#include "main.h"
/**
 * _isdigit - checks for degit
 * Return: 1 if degit 0 if not
 * @c: char to chech
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

