#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * string_nconcat- a function to concatinate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatinate src to dest
 * Return: pointer to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		q = malloc(sizeof(char) * (len1 + n + 1));
	else
		q = malloc(sizeof(char) * (len1 + len2 + 1));


	if (!q)
		return (NULL);

	while (i < len1)
	{
		q[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		q[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		q[i++] = s2[j++];

	q[i] = '\0';

	return (q);
}

