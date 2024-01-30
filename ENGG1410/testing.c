#include <stdio.h>
#include <string.h>

int multiplicationRec(int multiplicand, int multiplier);

void stringcat(char *des, char *src);

void main(){
    int x = multiplicationRec(4, 3);
    printf("%d", x);
    char yes[100] = {"Boobs"};
    char no[] = {" Breasts"};
    stringcat(yes, no);
    printf("%s", yes);
}

int multiplicationRec(int multiplicand, int multiplier){
    int product = 0;
    if(multiplier == 0){
        return product;
    }
    else{
        product = product + multiplicand;
        return product + multiplicationRec(multiplicand, multiplier - 1);
    }
}

void stringcat(char *des, char *src){
    int i, j, k, newStringLength = strlen(des) + strlen(src);
    char newString [newStringLength];
    for(i = 0 ; i < strlen(des); i++){
        newString[i] = des[i];
    }
    for(j = strlen(des), k = 0; j < newStringLength, k < strlen(src); j++, k++){
        newString[j] = src[k];
    }
    strcpy(des, newString);
}