#include "main.h"

/**
 * _strlen - return legnth of a string
 * @s: string to be checked
 *
 * Return: 0;
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++)
		a++;
	return (a);
}
