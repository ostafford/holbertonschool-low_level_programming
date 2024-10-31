#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i = i + 1;
}

char length = i;
int r;
for (r = length - 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
