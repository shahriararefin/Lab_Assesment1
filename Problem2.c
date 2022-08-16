// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.

#include<stdio.h>
int main(){

    int height=7,width=5,area,parameter;

    parameter=2*(height+width);
    printf("Parameter of the reactangle = %d inches\n", parameter);

    area= height*width;
    printf("Area of the rectangle = %d square inches\n", area);


    return 0;
}