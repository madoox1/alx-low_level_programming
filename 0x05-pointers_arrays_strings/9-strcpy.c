#include "main.h"
/**
 * _strcpy - copiies the string pointed to by src to dest
 * Return: returns a string
 * @dest: string to copy in
 * @src: string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
return (dest);
}
