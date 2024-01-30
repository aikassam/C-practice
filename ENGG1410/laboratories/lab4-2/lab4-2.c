#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 65;
    int i, j, k, m;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++){
            printf("%c ", ch);
        }
        ch++;
        printf("\n\n");   
    }
}