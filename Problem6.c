/*Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D.*/

#include<stdio.h>
int main() {
    int C, D,temp;
    printf("Enter the value for C and D: ");
    scanf("%d %d", &C, &D);

    temp=C;
    C=D;
    D=temp;

    printf("Value of C is %d\nValue of D is %d", C,D);

    return 0;
}