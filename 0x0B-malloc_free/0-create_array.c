#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * Return: pointer to array of chars
 * @size: size of array
 * @c: character
 */
char *create_array(unsigned int size, char c)
{
	char *t = NULL;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (size == 0 || t == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
return (t);
}
