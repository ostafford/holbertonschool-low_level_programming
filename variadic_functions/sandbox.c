#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"


/* Function Prototype */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Data Segment */


/* BSS Segment */


/* Stack */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
	va_list argument_list;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
	{
		if (!separator)
			printf("%d", va_arg(argument_list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(argument_list, int));
		else
			printf("%s%d", separator, va_arg(argument_list, int));
	}
	va_end(argument_list);
    
    printf("\n");
}

/* Text Segment */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
