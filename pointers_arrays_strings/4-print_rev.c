#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i = i +1;
}
_putchar(i);
_putchar('\n');
}
