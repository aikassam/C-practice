#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void main(){
    printf("Enter the directory of the file you wish to access:\n");
    char s[255], l[1000];
    scanf("%s", l);
    int a;
    double b, c , d;
    FILE * fpointer = fopen(l, "r");
    fscanf(fpointer, "%d\n", &a);
    printf("%d\n", a);
    fscanf(fpointer, "%s\n", s);
    printf("%s\n", s);
    fscanf(fpointer, "%lf", &b);
    printf("%lf\n", b);
    fscanf(fpointer, "%lf", &c);
    printf("%lf\n", c);
}

//C:\\Users\\aiman\\Desktop\\UofG\\ENGG1410\\miniproject2\\sample_users.txt
//C:\Users\aiman\Desktop\UofG\ENGG1410\miniproject2\sample_users.txt