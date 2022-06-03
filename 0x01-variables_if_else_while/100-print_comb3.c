#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, o;

	for (n = '0'; n <= '9'; n++);
	{
	for (o = '0'; o <= '9'; o++);
	{
	if (n < o)
	{
	putchar(n);
	putchar(o);
	if (n = '8' || (n == '8' && o != '9'))
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

