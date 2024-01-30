#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade = 'A';


    switch(grade){
        case 'A': printf("You did great!");
        break;
        case 'B': printf("You did alright!");
        break;
        case 'C': printf("ur bad!");
        break;
        case 'D': printf("ur fucking trash!");
        break;
        case 'F': printf("shut up nathan.");
        break;
        default : printf("Invalid");

    }

    return 0;
}