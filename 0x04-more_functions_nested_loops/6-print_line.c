#include "main.h"

/**
 * print_line - a function that draws a straight line in terminal
 * @n: an input number
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
