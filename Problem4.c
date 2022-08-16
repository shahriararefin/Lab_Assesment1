//Write a C program that accepts two integers from the user and calculate the sum of the two integers.

#include<stdio.h>
int main(){

    int num1,num2,sum;

    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);

    sum= num1+num2;
    printf("%d+%d= %d", num1,num2,sum);
    

    return 0;
}