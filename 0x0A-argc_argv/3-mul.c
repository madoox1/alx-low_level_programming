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
	if (argc == 1 || argc == 2)
	{
	printf("Error\n");
	return (1);
	}
        int res ;
        res = atoi(argv[1]) * atoi(argv[argc - 1]);
        printf("%d",res);
        return(0);
}                                 
