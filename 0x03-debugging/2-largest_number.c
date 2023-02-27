#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: largets number
 */
int largest_number(int a, int b, int c)
{
	int largets;

	if (a > b && a > c)
	{
		largets = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
