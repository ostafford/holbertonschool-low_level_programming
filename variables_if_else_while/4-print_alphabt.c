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
for (chlow = 'a'; chlow <= 'z'; chlow++)
if (chlow != 'e' && chlow != 'q')
{
putchar(chlow);
}
putchar('\n');
return (0);
}
