#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, negative, result, string_length, flag;

	i = 0;
	negative = 0;
	result = 0;
	string_length = 0;
	flag = 0;

	while (s[string_length] != '\0')
		string_length = string_length + 1;

	while (i < string_length && flag == 0)
	{
		if (s[i] == '-')
			negative = negative + 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			i = i + 1;
			return (result);
		}
	}

	if (flag == 0)
		return (0);

	return (result);
}
