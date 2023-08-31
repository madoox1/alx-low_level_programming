#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 * Return: x raised to the power of y
 * @x: base integer
 * @y: power integer
 */
int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	y--;
	pow = x * _pow_recursion(x, y);
	return (pow);
}
