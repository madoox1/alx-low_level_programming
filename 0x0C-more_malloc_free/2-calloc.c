#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * Return: pointer to arary
 * @nmemb: number of elements
 * @size: size of one element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
