#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply 2 numbers
 * Return always 0
 * @argc : int
 * argv : list
 */
int main(int argc, char const *argv[])
{
	int res;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
