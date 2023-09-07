#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * Return: pointer to newly allocated space in memory
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatinate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		size1++;
	for (i = 0; s2[i]; i++)
		size2++;
	if (n > size2)
		n = size2;
	str = malloc(n + size1 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1 [i];
	for (i = 0; i < n; i++)
		str[i + size1] = s2[i];
return (str);
}
