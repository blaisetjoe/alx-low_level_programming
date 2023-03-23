#include "function_pointers.h"

/**
 * int_index - searches for an intenger in an array of intengers
 * @array: array of int
 * @size: size of array
 * @cmp: a pointer to func that compare values
 *
 * Return: -1, index of first el
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
