#include <stdio.h>
/**
 * main- prints all possible ouputs of single digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
	putchar(n);
	if (n != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return(0);
}
