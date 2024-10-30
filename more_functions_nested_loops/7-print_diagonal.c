#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times character _ should be printed
 * Return: value of 0.
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int l;
for (l = 1; l <= n; l++)
{
_putchar('\\');
}
_putchar('\n');
}
}
