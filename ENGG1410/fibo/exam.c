#include <stdio.h>

void main(){
    int x = 3;
    int *y;
    int *z;

    y = &x;
    printf("%d\n", *y);
    z = y;
    printf("%d\n", *z);
    (*z)--;
    printf("%d\n", *z);

    printf("%d", *z);
}
