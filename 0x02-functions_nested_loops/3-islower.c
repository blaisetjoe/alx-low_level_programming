#include "main.h"

/**
 *_islower - checks if character is lower case.
 *@c: the character to be checked.
 *
 * Return: 1 if character is lowecase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
