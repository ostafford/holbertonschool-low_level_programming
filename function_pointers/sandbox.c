#include <stdio.h>
#include "function_pointers.h"

/* Function Prototype */
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);

/* Data Segment */


/* BSS Segment */


/* Stack */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i = i + 1)
		action(array[i]);
}

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/* Text Segment */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}