#include "main.h"
/**
 *_memset - function that fills memory with a constant byte
 *Return: string
 * s: pointer to a block of memory
 * b: const byte
 * n: number of memory bytes pointed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
