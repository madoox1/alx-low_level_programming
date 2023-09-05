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
	int i = 0, size = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		size++;
	for (i = 0; s2[i]; i++)
		size++;
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	size = 0;
	for (i = 0; s1[i]; i++)
	{
		size++;
		str[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
		str[i + size] = s2[i];
	return (str);
}
