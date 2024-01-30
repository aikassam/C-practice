#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char aLine[255];

    FILE *fpointer = fopen("employees.txt", "r");

    fgets(aLine, 255, fpointer);

    printf("%s", aLine);

    fclose(fpointer);

    return 0;

}