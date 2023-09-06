#include <stdio.h>
/**
 * main - prints program name
 * Return: Always 0
 * @argv: list
 * @argc: int
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
