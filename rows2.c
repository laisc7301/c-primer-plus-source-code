//row2.c
#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for(row = 0; row < ROWS; row++)
    {
        //printf("%d\n", row);
        for(ch = ('A' + row); ch < ('A' + CHARS); ch++)
        {
            printf("%c",ch);
        } 
        putchar('\n');
    }
    getchar();
    return 0;
}
