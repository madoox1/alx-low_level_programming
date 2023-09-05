#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * Return: pointer to arary
 * @width: width of 2d arary
 * @height: height of 2d array
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (height <= 0 || width <= 0)
		 return (NULL);
	a = malloc (height * sizeof(int));
	if ( a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for(j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}

