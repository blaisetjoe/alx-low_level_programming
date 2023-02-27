#include <unistd.h>

/**
 * _putchar - writes the char of c to stdout
 * @c: the char to print
 *
 * Return: 1, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
