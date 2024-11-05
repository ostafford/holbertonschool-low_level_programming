#include "main.h"
#include <stdio.h>

/* Function Prototype */
char *_memset(char *s, char buffer, unsigned int n);

/* Data Segment */

/* BSS Segment */

/* Stack */
char *_memset(char *s, char buffer, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i = i + 1)
    {
        s[i] = buffer;
    }
    return (s);
}

/* Text Segment */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}