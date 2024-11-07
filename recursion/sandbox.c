#include "main.h"
#include <stdio.h>

/* Function Prototype */
void _print_rev_recursion(char *s);

/* Data Segment */


/* BSS Segment */


/* Stack */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}


/* Text Segment */

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}