// A program to give you the circumference and area of a circle for any given radius

#include <stdio.h>

int main()
{
    // Assigning variables

    float r, pi=3.14159265, circ, area;

    printf("Enter the radius of the circle you wish to measure: \n");
    
    scanf("%f", &r);

    circ = 2*pi*r;

    area = pi*r*r;

    printf("The circumference of this circle is %f.\nThe area of this circle is %f.", circ, area);
}