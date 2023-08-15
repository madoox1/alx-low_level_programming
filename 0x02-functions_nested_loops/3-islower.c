#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower - check if character is lowercase
 */

	int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);

}
