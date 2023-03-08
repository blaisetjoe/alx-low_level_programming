#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src
 * to memeory area @dest
 *
 * @n: bytes
 * @src: source
 * @dest: destination
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
