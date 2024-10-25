#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_sign(int n)
{
if (n > 0)
{
	printf('+');
	return (1);
} else if (n < 0)
{
	printf('-');
	return (0);
} else
	printf('0');
	return (0);
}
