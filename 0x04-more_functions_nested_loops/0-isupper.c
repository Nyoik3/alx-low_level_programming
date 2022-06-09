#include "main.h"

/**
 * _isupper - evaluates if letter is uppercase
 * @c: print in
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
