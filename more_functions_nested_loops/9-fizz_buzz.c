#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100
 * multiple three prints for fizz
 * multiple for prints for buzz
 * multiple for three and five fizzbuzz
 * Return: value of 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) // count to 100
	{
		if (i % 3 == 0) // print multiple of three
		{
			printf("Fizz ");  
		} else if (i % 5 == 0) // print multiple of five
		{
			printf("Buzz ");
		} else if (i % 5 == 0 && i % 3 == 0) // print multiple of five and three
		{
			printf("FizzBuzz ");
		} else if (i == 1)
		{
			printf("%d ", i); // Print number 
		}
	}
	printf("\n");

	return (0);
}
