#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
char *create_array(unsigned int size, char c);

/* Data Segment */

/* BSS Segment */

/* Stack */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i = i + 1;
	}

	*(p + i) = '\0';

	return (p);
}

/* Text Segment */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}