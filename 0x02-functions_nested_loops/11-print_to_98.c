#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", 1);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);

		}

		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
		printf("%d, ", i);
		}	
		printf("\n");
	}
	else if (n ==98)
		printf("%d\n", n);
}
