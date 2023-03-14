#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: int
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv++;

	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);

}

