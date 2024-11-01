#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i,
j,
tmp;

j = n;

for (i = 0; i < n; i = i + 1)
{
a[--j] = tmp;
}
}
