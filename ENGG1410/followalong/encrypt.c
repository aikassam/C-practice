#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i = 0;
    printf("number of args: %d", argc);
    printf("\nfirst argument is: %s", argv[0]);

    for (i = 1; i < argc; i++){
        printf("\narg%d=%s", i, argv[i]);

        printf("%d", strcmp(argv[i], "-E"));

        if((strcmp(argv[i], "-E")) == 0){
             printf("encrypt");
         } else if((strcmp(argv[i], "-D")) == 0){
             printf("decrypt");
         }
    }

    printf("\n");
    return 0;
}