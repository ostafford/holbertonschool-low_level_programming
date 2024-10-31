#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to print string
 *
 * Return:
 */

void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
printf(str[i]);
i = i +1;
}
printf('\n');
}
