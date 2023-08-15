#include "main.h"

/**
 * main - Entry point
 * @c: Function parameter
 * Return: always 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}
