#include <stdio.h>
/**
 * main- prints two two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 100; m++)
	{
	for (n = 0; n < 100; n++)
	{
	if (m < n)
	{
	putchar((m / 10) + 48);
	putchar((m % 10) + 48);
	putchar(' ');
	putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	if (m != 98 || n != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
