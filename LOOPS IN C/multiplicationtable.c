#include <stdio.h>

void main()
{
int number, i, multi;

printf("Enter a number: ");
scanf("%d", &number);

for (i =1; i<=10; i++)
{
multi = number * i;
printf("%d \n", multi);
}
}