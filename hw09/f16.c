#include <stdio.h>

int main()
{
    char col;
    int row;
    scanf("%c%d", &col, &row);
    int colNum = col - 'A';
    int rowIx = row - 1;
    if ((colNum + rowIx) % 2 == 0)
        printf("BLACK\n");
    else
        printf("WHITE\n");
    return 0;
}
