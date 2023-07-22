//a program that reads the marks of students, calculate sum & average

#include <stdio.h>

void main()
{
    int marks[5], i;
    int sum = 0;
    float average;
    printf("Enter all 5 marks");
    for(i=0; i<=5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0; i<=5; i++)
    {
        sum = sum + marks[i];
    }
    {
        average = sum/5;
    }
    printf("sum will be %d, average will be %f", sum, average);
}