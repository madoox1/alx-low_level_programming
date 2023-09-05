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
	int size = 0 ,i  ;
	char *str2 = NULL;

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i]; i++)
			size++;
		str2 = malloc(size+1);
		if (str2 == NULL)
			return (NULL);
		else
		{
			for(i = 0; i < size; i++)
				str2[i] = str[i];
			return (str2);
		}
	}
}
