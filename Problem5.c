/*
Write a C program that accepts an employee's ID,
 total worked hours of a month and the amount he received per hour. 
 Print the employee's ID and salary (with two decimal places) of a particular month.
*/

#include<stdio.h>
int main(){

    char id[10];
    int hour;
    double value,salary;

    printf("Enter Employees ID: ");
    scanf("%s", &id);
    printf("\n");

    printf("Input working hour of a month: ");
    scanf("%d", &hour);
    printf("\n");

    printf("Amount he recieve for working per hour: ");
    scanf("%lf", &value);

    salary= value*hour;
    printf("Employees ID: %s\nSalary: %.2lf\n", id, salary);


    return 0;
}