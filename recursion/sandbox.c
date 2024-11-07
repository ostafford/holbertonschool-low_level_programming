#include "main.h"
#include <stdio.h>

/* Function Prototype */
int _strlen_recursion(char *s);

/* Data Segment */


/* BSS Segment */


/* Stack */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion);
}


/* Text Segment */

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}