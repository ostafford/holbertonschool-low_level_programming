#include "main.h"
#include <stdio.h>

/* Function Prototype */
unsigned int _strspn(char *s, char *accept);

/* Data Segment */


/* BSS Segment */


/* Stack */
unsigned int _strspn(char *s, char *accept)
{
	int i,
	index_check,
	count_match,
	char_match;

	count_match = 0;

	for (i = 0; s[i] != '\0'; i = i + 1)
	{
		char_match = 0;
		for (index_check = 0; accept[index_check] != '\0'; index_check = index_check + 1)
		{
			if (s[i] == accept[index_check])
			{
				count_match = count_match + 1;
				char_match = 1;
			}
		}
		if (char_match == 0)
		{
			return (count_match);
		}
	}

	return (0);
}

/* Text Segment */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
