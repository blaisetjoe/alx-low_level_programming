#include "main.h"
/**
 * _strdup - return a pointer to a newly allocated spac
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
		length++;
	if (length < 1)
		return (NULL);
	ar = malloc(length * sizeof(char));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < length; i++)
		ar[i] = str[i];

	ar[i] = '\0';

	return (ar);
}
