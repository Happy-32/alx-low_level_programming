#include "main.h"

/**
 * *_strdup - creates an array
 * @str: the size of the array
 *
 * Return: array.
 */
char *_strdup(char *str)
{
	char *dupe;
	int index, len;
	len = 0;
	if (str == NULL)
		return (NULL);

	dupe = malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dupe[index] = str[index];


	return (dupe);
}
