#include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
    /* declaring and initializing two variables */ 
    int i, j; // or int i = 1, j = 0;

    for(i=1,j=0; i<10; i++) //then for loop will be for(; i<10; i++) 
    printf("%d %d ",i,j);
    
} /*OUTPUT - 1 0 2 0 3 0 4 0 5 0 6 0 7 0 8 0 9 0*/


/*IF ONLY ONE VARIABLE IS INITIALIZED*/

void main ()
{
    /* declaring two var and initializing one*/ 
    int i, j = 0; // initializing only j

    for(; i<10; i++) //then for loop will be for(; i<10; i++) 
    printf("%d %d ",i,j);

} /*NO OUTPUT*/