#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: pointer1
 * @s2: pointer2
 * @n: num of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, j, len1, len2;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	ptr = malloc(len1 + n + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (j = 0; j < n; j++)
	{
		ptr[k] = s2[j];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);

}
