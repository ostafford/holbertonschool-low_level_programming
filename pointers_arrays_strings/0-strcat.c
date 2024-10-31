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
    char i;
    char n;

    i = 0;

    while (dest[i] != '\0')
        i = i + 1;
        
        n = 0;
        while (src[n] != '\0')
        {
            src[n] = '\0';
        }
        n = n + 1;
        
    {
        dest[i] = '\0';
    }
    return(dest);

}
