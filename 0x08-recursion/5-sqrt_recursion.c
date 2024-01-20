include<stdio.h>
/**
 * checker - check from base to input number
 * @n : number to start from
 * @base : number to determinate square
 * Return : natureal square root
 */
int checker(int n, int base)
{
	if(n * n == base)
		return(n);
	else if(n * n > base)
		return(-1);
	return checker(n + 1, base);
}
/**
 * _sqrt_recursion - returns natural square root
 * @n : number to determinate natural square root
 * Return : the square root of n
 */
int _sqrt_recursion(int n)
{
	return checker(1, n);
}

