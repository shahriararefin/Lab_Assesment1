/*If a six-digit number is input through the keyboard, 
write a program to calculate the sum of its digits.
*/

#include<stdio.h>
int main(){

    int num=6, remainder, sum=0;
    printf("Enter six digit number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }

    printf("Sum of the number is : %d", sum);

    return 0;
    
}