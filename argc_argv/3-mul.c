#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
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
