#include "main.h"
#include <stdio.h>

/* Function Prototype */
char *_strpbrk(char *s, char *accept);

/* Data Segment */


/* BSS Segment */


/* Stack */
char *_strpbrk(char *s, char *accept)
{
	int i, index_match;

	for (i = 0; *s != '\0'; i = i + 1)
	{
		for (index_match = 0; accept[index_match] != '\0'; index_match = index_match + 1)
		{
			if (*s == accept[index_match])
			{
				return (s);
			}
		}
		s = s + 1;
	}

	return (NULL);
}

/* Text Segment */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

