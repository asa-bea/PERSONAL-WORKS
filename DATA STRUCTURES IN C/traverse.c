//traverse the members of an array
#include <stdio.h>

void main()
{
    int a[50], size, i;
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
     printf("%d", a[i]);

}