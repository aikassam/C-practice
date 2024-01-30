#include <stdio.h>

int main(){
    int i, j, k=0, l;
    char string[128];
  //  while(k=0){
    printf("Type the sentence you wish to encrypt:\n");
    fgets(string, 128, stdin);
    printf("Do you wish to encrypt or decrypt your string?:\n #1 - ENCRYPT\n #2 - DECRYPT\n");
    scanf("%d", &l);
    switch(l){
        case 1:
        for(i=0;i<128;i++){
            if(string[i]== ' '){
                continue;
            }
            else{
                string[i]=string[i]+6;
            }
        }
        case 2:
        for(j=0;j<128;j++){
             if(string[j]== ' '){
                continue;
            }
            else{
                string[j]=string[j]-6;

            
        }
    }
    printf("%s\n", string);
    

//}printf("Do you wish to continue? Enter 0 for yes, enter anything else for no:\n");
//scanf("%d", k);
}
}