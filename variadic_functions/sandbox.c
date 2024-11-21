#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"


/* Function Prototype */
void print_strings(const char *separator, const unsigned int n, ...);


/* Data Segment */


/* BSS Segment */


/* Stack */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list argument_list;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
	{
		string = va_arg(argument_list, char *);
		if (!string)
			string = "nil";
		if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");

	va_end(argument_list);

}


/* Text Segment */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
