#include "main.h"
/**
 * main - entry point
 * Return: Always return 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
	{
		return (a);
	}
	return (0);
}
