#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints the numbers 10 time, from 0 to 14.
 *
 * Return: value of 0.
 */

void more_numbers(void)
{
char i;
char n;
for (i = 0; i < 14; i++)
{
for (n = 0; n < 10; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
}
