#include <stdio.h>
#include <string.h>

void main(){
    char * boob;
    char cock[255] = {"balls,boobs,tits,tiddies"};
    for(int i=0;i<4;i++){
        boob = strtok(cock, ",");
        printf("%s", boob);
    }
}
