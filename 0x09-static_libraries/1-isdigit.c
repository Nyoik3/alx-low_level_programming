#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: print int
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
