#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: char*
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
		printf("Error\n");
	return (0);
}

