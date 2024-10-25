#include "main.h"
/**
 * _islower - checks for lowercase character.
 * Parameter -> 'c'
 * Description: Write a function that checks for lowercase character.
 * Return: 1 if @c is lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
