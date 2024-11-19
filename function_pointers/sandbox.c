#include <stdio.h>
#include "function_pointers.h"

/* Function Prototype */
int abs_is_98(int elem);
int is_strictly_positive(int elem);
int is_98(int elem);


/* Data Segment */


/* BSS Segment */


/* Stack */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}
int is_strictly_positive(int elem)

{
    return (elem > 0);
}
int is_98(int elem)

{
    return (98 == elem);
}

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array && cmp)
    {
        for (i = 0; i < size; i = i + 1)
        {
            if (cmp(array[i]) != 0)
            return(i);
        }
        
    }
    return(-1);
}

/* Text Segment */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}

