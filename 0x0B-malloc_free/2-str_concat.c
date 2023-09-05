#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * Return: string
 * @s1: string 1
 * @s2: string 2
 */
char *str_concat(char *s1, char *s2)
{
	int i , size1 = 0, size2 = 0;
	char *str = NULL;

	for (i =0; s1[i]; i++)
		size1++;
	for (i =0; s2[i]; i++)
		size2++;
	str = malloc(size1 + size2 + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size1; i++)
			str[i] = s1 [i];
		for (i = 0; i < size2; i++)
			str[i + size1] = s2[i];
	return (str);
	}
}
