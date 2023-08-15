#include "main.h"
/**
 * main - entry point
 * @c: parameter to be checked
 * Return: Always 1 or 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
