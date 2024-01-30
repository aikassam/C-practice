#include <stdio.h>

int main(){
    char array[120]= {"Hello there folks!"};
    int i;
    for(i=0;i<120;i++){
        printf("%c", array[i]);
    }
    return 0;
}