#include <stdio.h>

/**
 *main -prints various types sizes on computer
 *Return: always 0 (success)
 */
int main(void)
{
	char ch;
	int nt;
	long int lnt;
	long long int llnt;
	float flt;

	printf("size of a char: %i byte(s)\n", sizeof(ch));
	printf("size of a int: %i bytes(s)\n", sizeof(nt));
	printf("size of a long int: %i bytes(s)\n", sizeof(lnt));
	printf("size of a long long int: %i bytes(s)\n", sizeof(llnt));
	printf("size of a float: %i bytes(s)\n", sizeof(flt));
	return (0);
}
