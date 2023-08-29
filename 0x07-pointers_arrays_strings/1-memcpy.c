#include "main.h"
/**
 * _memcpy - copies memory area
 * Return: pointer to string
 * @dest: memory area to copy in
 * @src: pointer to memory area
 * @n: number of bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
return (dest);
}
