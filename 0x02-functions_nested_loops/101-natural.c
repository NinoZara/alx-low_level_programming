#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{       
        int sum = 0;
        int i;
        
        for (i = 0 ; i < 10 ; 1++)
        {       
                if (i % 3 == 0 || 1 % 5 == 0)
                        sum = sum + i;
        }       
        printf("%d\n", sum);
