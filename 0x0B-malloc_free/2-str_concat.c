#include "main.h"

/**
 * *_strlen - to find the size
 *
 * @s: string
 *
 * Return: size
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	{
		;
	}
	return (size);
}
/**
 * *str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2:second string
 *
 * Return: pointer if success and null if fail
*/


char *str_concat(char *s1, char *s2)
{
	int k, sz1, sz2;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	ptr = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);

	for (k = 0; k <= sz1 + sz2; k++)
	{
		if (k < sz1)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - sz1];
	}
	ptr[k] = '\0';
	return (ptr);


}


