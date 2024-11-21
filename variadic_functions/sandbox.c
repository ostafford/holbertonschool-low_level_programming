#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"


/* Function Prototype */
int sum_them_all(const unsigned int n, ...);

/* Data Segment */


/* BSS Segment */


/* Stack */
int sum_them_all(const unsigned int n, ...)
{
	va_list argument_list;
	unsigned int i;
	int sum_total = 0;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
		sum_total = sum_total + va_arg(argument_list, int);

	va_end(argument_list);

	return (sum_total);
}

/* Text Segment */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}