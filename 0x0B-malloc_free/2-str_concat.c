#include "main.h"
#include<stdlib.h>

/**
 * str_concat - a function to concatinate two string on the available space
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{

	int a, b;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s = (char *)  malloc(((a + b) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s1[a];
	}

	for (b = 0; s2[b] != '\0'; b++)
	{

		s[a] = s2[b];
		a++;
	}
	return (s);
}
