#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
while (i < n)
{
dest[i] = '\0';
i = i + 1;
}
	return (dest);
}
