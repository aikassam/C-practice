#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    double gpa;
    char major[100];
    int age;

};

int main(){

    struct Student Aiman;
    Aiman.age = 18;
    Aiman.gpa = 3.1;
    strcpy(Aiman.major, "Computer Engineering");
    strcpy(Aiman.name, "Aiman");

    printf("%s\n", Aiman.major );
    printf("%f\n", Aiman.gpa);

    return 0;


}