#include <stdio.h>
#include <string.h>
#define SIZE 100


int howManyZeros(char string[SIZE]){
   
    int i, j = 0;
   
    for(i=0; i < SIZE; i++){
   
        if(string[i]=='0'){
   
            j++;
   
        }else{
   
            continue;
   
        }
   
    }
    return j;
}
const char* replaceZeros(char string[SIZE], char newString[SIZE]){

    int i;
    
    for(i=0; i < SIZE; i++){
    
        if(string[i]=='0'){

            newString[i]='Z';
      
        }else{
      
            newString[i]=string[i];
      
        }
    }
    return newString;
}
int main(){

    char string[SIZE], newString[SIZE];

    printf("Enter a string (may have spaces): ");

    fgets(string, SIZE, stdin);

    printf("\n****************************************\n");

    printf("Number of zeros in %s = %d\n", string, howManyZeros(string));

    replaceZeros(string, newString);

    printf("Original string = %s\nNew string = %s", string, newString);

    printf("****************************************");

    return 0;
}
