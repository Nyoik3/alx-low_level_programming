#include <stdio.h>
/**
 * main - prints all alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}
