#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: size of an array.
 * @cmp: pointer to function to be used to compare values.
 * Return: if no element matches size <= 0 - -1.
 * otherwise- index of first element of which cmp does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
