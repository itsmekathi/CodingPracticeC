// Problem statement: 
// If the marks obtained by a student in five different subjects
// are input through the keyboard, write a program to find out
// the aggregate marks and percentage marks obtained by the
// student. Assume that the maximum marks that can be
// obtained by a student in each subject is 100

#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, avg, percentageMarks;
    printf("Enter the marks obtained in subjects.\n");
    scanf("%f%f%f%f%f",&m1, &m2, &m3, &m4, &m5);
    avg = (m1 + m2 + m3 + m4 + m5) / 5;
    percentageMarks = ((m1 + m2+ m3 + m4 + m5)/ 500 ) * 100;
    printf("Average marks = %f\n", avg);
    printf("Percentage of marks obtained = %f\n", percentageMarks);
    return 0;
}