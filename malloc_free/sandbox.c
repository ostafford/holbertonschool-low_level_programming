#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
char *str_concat(char *s1, char *s2);

/* Data Segment */

/* BSS Segment */

/* Stack */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0,
	j = 0,
	length_1 = 0,
	length_2 = 0;

	while (s1 && s1[length_1])
		length_1 = length_1 + 1;
	while (s2 && s2[length_2])
		length_2 = length_2 + 1;

	s3 = malloc(sizeof(char) * (length_1 + length_2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < length_1)
		{
			s3[i] = s1[i];
			i = i + 1;
		}
	}

	if (s2)
	{
		while (i < (length_1 + length_2))
		{
			s3[i] = s2[j];
			i = i + 1;
			j = j + 1;
		}
	}
	s3[i] = '\0';

	return (s3);
}

/* Text Segment */
int main(void)
{
    char *s;

    s = str_concat("Best ", "School");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}