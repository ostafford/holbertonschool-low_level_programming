#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
char *_strdup(char *str);

/* Data Segment */

/* BSS Segment */

/* Stack */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, string_length;

	i = 0;
	string_length = 0;

	if (str == NULL)
		return (NULL);

	while (str[string_length])
		string_length = string_length + 1;

	dup = malloc(sizeof(char) * (string_length + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i = i + 1;

	return (dup);
}

/* Text Segment */
int main(void)
{
    char *s;

    s = _strdup("Duplicated");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}