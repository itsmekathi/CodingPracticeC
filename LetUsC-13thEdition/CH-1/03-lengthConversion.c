/* Problem statement */
/* The distance between two cities (in km.) is input through the 
   keyboard. Write a program to convert and print the distance
   in meters, feet, inches and centimeters.
*/

#include<stdio.h>

int main()
{
	printf("Enter distance in km: ");
	float distanceInKm;
	scanf("%f",&distanceInKm);
	printf("Distance in meters = %f m\n", distanceInKm * 1000);
	printf("Distance in feet = %f ft\n", distanceInKm * 1000 * 3.2808399);
	printf("Distance in inches = %f inches\n", distanceInKm * 1000 * 39.3700787);
	printf("Distance in centimeters = %f centimeters\n", distanceInKm * 100);
}
