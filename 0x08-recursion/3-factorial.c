#include "main.h"
/**
 * factorial - factorial of a given number
 * Return: n is lower than 0, -1 to indicate error
 * @n: integer to calculat factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n = n * factorial(n - 1));
}
