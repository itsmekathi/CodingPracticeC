/* Problem statement */
/* Ramesh's basic salary is input through the keyboard.
   His dearness allowance is 40% of basic salary, and house
   rend allowance is 20% of basic salary. Write a program to
   calculate his gross salary
*/

#include <stdio.h>

int main()
{
	printf("Enter basic salary: ");
	int basicSalary;
	scanf("%d", &basicSalary);
	float grossSalary = basicSalary + (basicSalary * 0.4) + (basicSalary * 0.2);
	printf("Gross salary is: %f\n", grossSalary);	
}
