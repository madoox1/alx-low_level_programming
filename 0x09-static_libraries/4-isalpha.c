#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *_isalpha - check if character is a letter
 *Return: 1 if letter,0 otherwise
 *@c: is the char to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
