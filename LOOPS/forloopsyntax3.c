 #include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
    /* declaring and initializing two variables */ 
    int i, j; 

    for(i=1,j=0; i<=5, j<3; i++) //multiple conditions, j<3 will be treated as the termination condition
    printf("%d %d ",i,j);
} /*OUTPUT - an infinite loop because the j value never changes*/