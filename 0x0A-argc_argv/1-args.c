#include <stdio.h>
/**
 * main - prints program name
 * Return: Always 0
 * @argv: list
 * @argc: int
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
