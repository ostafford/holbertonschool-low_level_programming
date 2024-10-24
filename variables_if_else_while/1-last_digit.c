
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %i is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %i is 0\n", n);
}
else if (n < 6)
{
printf("Last digit of %i is less than 6 and not 0/n", n);
}
	return (0);
}
