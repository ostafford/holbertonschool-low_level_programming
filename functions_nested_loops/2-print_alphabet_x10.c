#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * 10 times, each on a new line, using nested loops.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
