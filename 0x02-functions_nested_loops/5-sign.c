#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of integer
 * @n: checks sign of integer
 * Return: 1 if n is greater than zero
 *  0 if n is 0, -1 if otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}

}
