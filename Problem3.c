// Write a C program to compute the perimeter and area of a circle with a given radius.

#include<stdio.h>
int main(){
    int radius=6;
    float area, parameter;

    parameter= 2*3.1416*radius;
    printf("Parameter of the circle is %f inches\n", parameter);

    area = 3.1416*(radius*radius);
    printf("Area of the circle is %f square inches", area);

    return 0;
}