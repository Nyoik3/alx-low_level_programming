#include <stdio.h>

/**
 * main - prints various types sizes on computer
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of a int: %i bytes(s)\n", sizeof(int));
	printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("size of a float: %i bytes(s)\n", sizeof(float));
}
