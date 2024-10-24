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
char chlow = 'a';
char chup = 'A';
for (chlow = 'a'; chlow <= 'z'; chlow++)
{
putchar(chlow);
}
for (chup = 'A'; chup <= 'Z'; chup++)
{
putchar(chup);
}
putchar('\n');
return (0);
}
