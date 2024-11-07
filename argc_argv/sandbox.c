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
int sum_add;
if (argc > 1)
{
for (i = 1; i < argc; i = i + 1)
{
sum_add = sum_add + _atoi(argv[i]);
}
printf("%d\n", sum_add);
}
return (0);
}

/* Text Segment */
