#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - copy a string
 * return: pointer to string
 * @str: string
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *str2 = NULL;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	str2 = malloc(size + 1);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		str2[i] = str[i];
	return (str2);
}
