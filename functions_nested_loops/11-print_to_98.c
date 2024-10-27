#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * insert new line
 * @num: print from this number 
 * return: sum of a and b
 */

void print_to_98(int num)
{
	int i, s;

	if (num <= 98)
	{
		for (i = num; i <= 98; i++)
		{
			if (i != 98)
				_putchar("%d, ", i);
			else if (i == 98)
				_putchar("%d\n", i);
		}
	} else if (num >= 98)
	{
		for (s = num; s >= 98; s--)
		{
			if (s != 98)
				_putchar("%d, ", s);
			else if (j == 98)
				_putchar("%d\n", s);
		}
	}
}
