#include "main.h"
#include <stdio.h>

/* Function Prototype */
int _sqrt_recursion(int n);
int inner_sqrt_recursion(int n, int i);

/* Data Segment */

/* BSS Segment */

/* Stack */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (inner_sqrt_recursion(n, 0));
}

int inner_sqrt_recursion(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (inner_sqrt_recursion(n, i + 1));
}

/* Text Segment */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}