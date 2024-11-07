#include "main.h"
#include <stdio.h>

/* Function Prototype */
int main(int argc __attribute__((unused)), char *argv[]);

/* Data Segment */


/* BSS Segment */


/* Stack */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}


/* Text Segment */

