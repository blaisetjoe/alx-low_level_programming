#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 *
 * Return: pointer to first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	while (8s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
