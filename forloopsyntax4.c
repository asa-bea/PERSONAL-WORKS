#include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
    /* declaring and initializing two variables */ 
    int i, j; // or int i = 1, j = 0;

    for(i=1,j=0; i==10; i++) //then for loop will be for(; i<10; i++) 
    printf("%d %d ",i,j);
    
} /*no output*/ 

#include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
    /* declaring and initializing two variables */ 
    int i, j; // or int i = 1, j = 0;

    for(i=1,j=0; i<=100||j<3; i++,j++) //logical or means if one is true, the printf runs
    printf("%d %d ",i,j);
    
} 