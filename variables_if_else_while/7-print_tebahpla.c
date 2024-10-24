#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chlow = 'z';
for (chlow = 'z'; chlow >= 'a'; chlow--)
{
putchar(chlow);
}
putchar('\n');
return (0);
}
