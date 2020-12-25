// Problem statement:
// Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into centigrade degrees.

#include <stdio.h>
int main()
{
    float degreeFahrenheit, degreeCelsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &degreeFahrenheit);
    degreeFahrenheit = (degreeFahrenheit * 9)/37;
    printf("Degree in celsius is:%f", degreeCelsius);
    
    return 0;
}