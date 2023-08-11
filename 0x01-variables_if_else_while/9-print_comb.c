#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int i;

        putchar('0');
        for (i = 0; i < 9 ; i++)
        {
                putchar(',');
                putchar(' ');
                putchar('1' + i);
        }
        putchar('\n');
        return (0);
}
