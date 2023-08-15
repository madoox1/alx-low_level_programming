#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower - check if character is lowercase
 * return : 1 if lowercase,0 otherwise
 *@c: is the char to be checked
 */

	int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);

}
