#include <stdio.h>
#include <string.h>

struct user_t{
    char name [255];
    double lon, lat, alt, time;
};

struct name_distance{
    char name[255];
    double distance;
};

void minElement(struct name_distance * const a, int num, int * b){
    int i, min;
    double x = a[0].distance;
    for(i=1;i<num;i++){
        if(x > a[i].distance){
            x = a[i].distance;
            min = i;
        }
    }
    b = min;
}

void main(){
    int l;
    struct name_distance poop[2];
    strcpy(poop[0].name, "Aiman");
    poop[0].distance = 4.8;
    strcpy(poop[1].name, "Isabel");
    poop[1].distance = 19.6;
   /* int i, j, x;
    double element;
    printf("Enter number of elements for array:\n");
    scanf("%d", &x);
    double array[x];
    for(i=0;i<x;i++){
        printf("Enter the value you wish to store in element #%d:\n", i+1);
        scanf("%lf", &element);
        array[i] = element;
    }
    printf("( ");
    for(j=0;j < x;j++){
        printf("%.2lf ", array[j]);
    }
    printf(")\n");*/


    
    minElement(poop, 2, &l);
    printf("%d", l);
}