#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of char: 1 byte(s)", sizeof(char));
	printf("Size of int: 4 byte(s)", sizeof(int));
	printf("Size of long int: 8 byte(s)", sizeof(long int));
	printf("Size of long long int: 8 byte(s)", sizeof(long long int));
	printf("Size of float: 4 byte(s)", sizeof(float));
	return (0);
}
