#include "main.h"
#include <stdio.h>

/* Function Prototype */
char *_strstr(char *haystack, char *needle);

/* Data Segment */


/* BSS Segment */


/* Stack */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int index_match;

	for (i = 0; haystack[i] != '\0'; i = i + 1)
	{
		for (index_match = 0; needle[index_match] != '\0'; index_match = index_match + 1)
		{
			if (haystack[i + index_match] != needle[index_match])
				break;
		}
		if (!needle[index_match])
			return (&haystack[i]);
	}
	return (NULL);
}

/* Text Segment */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
