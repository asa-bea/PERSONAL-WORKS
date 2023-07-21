 #include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
   int i; /*dont initialise i */
    for (; i<10; i++) /* to print out numbers from 1 to 9*/
    printf("%d ",i);
} /* there is no output because i wasn't initialized*/

#include <stdio.h>

/* testing out the syntax of a for loop*/

void main ()
{
    int i = 1; /*initialize i before expressions  */
    for (; i<10; i++) /* to print out numbers from 1 to 9*/
    printf("%d ",i);
} /* outout was printed*/