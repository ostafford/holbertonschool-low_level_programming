#include <stdio.h>
#include "function_pointers.h"

/* Function Prototype */
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/* Data Segment */


/* BSS Segment */


/* Stack */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

/* Text Segment */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}

void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}