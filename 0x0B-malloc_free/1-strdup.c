#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 *in memory,which contains a copy of the string given as a parameter
 *
 *@str: string input
 *
 *Return: pointer to the duplicated string
 *It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	int k = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	{
		;
	}
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; k < size; k++)
			ptr[k] = str[k];
	}
	return (ptr);

}
