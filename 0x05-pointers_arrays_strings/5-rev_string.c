#include "main.h"
/**
 * rev_string - reverse a string
 * Return: none
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, n;
	char temp;

	n = 0;
	for (i = 0 ; s[i] != '\0'; i++)
		n++;
	for (i = 0; i < (n / 2); i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
