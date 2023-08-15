#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 *abs - determinat the absolut value of a number
 *Return: 0 if the number is null, n if the number is positif, -n if the number is negative
 *@n: is the char to be checked
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);
	else
		return (0);
}
