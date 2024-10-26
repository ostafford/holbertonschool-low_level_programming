#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function that prints the last digit of a number.
 * @l:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int l)
{
if (l > 0 || l == 0)
{
_putchar (l % 10 + '0');
return (l % 10);
}
else
{
l = l * -1;
_putchar (l % 10 + '0');
return (l % 10);
}
}
