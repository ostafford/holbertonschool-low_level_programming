#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;

	while (src[length] != '\0')
	{
		length = length + 1;
	}

	for (i = 0; i < length; i = i + 1)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
