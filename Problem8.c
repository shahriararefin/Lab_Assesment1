/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees. */

#include<stdio.h>
int main(){

    float fahrenheit, celcius;
    printf("Enter the temperature of Dhaka in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius= ((fahrenheit-32)*5)/9;

    printf("Temperature in celcius is: %.1f", celcius);

    return 0;
}