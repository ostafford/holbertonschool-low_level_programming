#include "main.h"
#include <stdio.h>

/* Function Prototype */
int main(int argc, char *argv[]);

/* Data Segment */

/* BSS Segment */

/* Stack */
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i = i + 1)
    {
        printf("%s\n", argv[i]);
    }

    (void)argv;

    return (0);
}

/* Text Segment */
