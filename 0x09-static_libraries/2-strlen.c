#include "main.h"
/**
 * _strlen - determinat string length
 * Return: length of string
 * @s: input string
 */
int _strlen(char *s)
{
	int n, i;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
		n++;
return (n);
}
