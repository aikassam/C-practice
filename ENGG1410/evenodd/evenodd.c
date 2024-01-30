#include <stdio.h>

//Check if number is even or odd!

int main()
{
    printf("Test whether a number is odd or even! \n");

    int x, y;
    
    scanf("%i", &x);
    
    y = x%2;
    
    if (y == 0)
    {
        printf("This number is even!");

    }
    else
    {
        printf("This number is odd!");
    }
    
    return 0;
}