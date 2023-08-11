#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26 ; i++)
	putchar('a' + i);
	printf("\n");
	return (0);
}
