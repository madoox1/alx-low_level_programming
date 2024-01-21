#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{       
    int i = 0, j = 0, count = 0, k = 0;
    char *result;

    if(ac == 0 || av == NULL)
    {       
        return(NULL);
    }       

    for(i = 0; i < ac; i++)
    {       
        for(j = 0; av[i][j]; j++)
        {       
            count++;
        }       
    }       

    result = malloc(count + ac + 1);

    if (result == NULL) {
        return NULL;
    }

    for(i = 0; i < ac; i++)
    {       
        for(j = 0; av[i][j]; j++)
        {       
            result[k++] = av[i][j];
        }       
        result[k++] = '\n';
    }       

    result[k] = '\0';

    return result;
}

