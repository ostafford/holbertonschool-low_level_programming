#include "main.h"
#include <stdio.h>

/* Function Prototype */
void print_chessboard(char (*a)[8]);

/* Data Segment */


/* BSS Segment */


/* Stack */
void print_chessboard(char (*a)[8])
{
	int i; 
	int index_match;

	for (i = 0; i < 8; i = i + 1)
	{
		for (index_match = 0; index_match < 8; index_match = index_match + 1)
		{
			putchar(a[i][index_match]);
		}
		putchar('\n');
	}
}

/* Text Segment */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
