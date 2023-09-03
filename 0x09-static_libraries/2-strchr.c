#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * Return: pointer to the first occurrence of the character 
 * @s: string to search in
 * @c: char to locate
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
			break;
		}
		i++;
	}
return (NULL);
}
