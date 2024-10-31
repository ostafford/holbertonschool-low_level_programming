#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
    int i;

    i = 0;

    while (dest[i] != '\0')
        i = i + 1;
    {
        dest[i] = '\0';
    }
    return(dest);

}
