//insert the member of an array at a specific position 3
#include <stdio.h>

void main()
{
    int a[50], size, i, num, position;
    printf("Enter size of array");
    scanf("%d", &size);
    if (size>50)
    {
        printf("overflow condition of array size");
    }
    else
    printf("enter members of array ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The members of array are ");

     for(i=0; i<size; i++)
     {
     printf("%d", a[i]);
     }
     printf("\nenter data you want to insert ");
     scanf("%d", &num);
     printf("Enter position");
     scanf("%d", &position);

     //for swapping elements
     for (i=size-1; i >= position-1; i--)
     {
        a[i+1] =a[i];
     }
     a[position-1] = num; 
     size++;
     printf("%d", a[i]);
}