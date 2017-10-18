#include <stdio.h>
/*
Computation of Ptr2 – Ptr1 :
Remember the following formula while computing the difference between two pointers –
Final Result  = (ptr2 - ptr1) / Size of Data Type

Step 1: Compute Mathematical Difference (Numerical Difference)
ptr2 - ptr1  = Value of Ptr2 - Value of Ptr1
1004-1000 = 4
Step 2: Finding Actual Difference (Technical Difference)
Final Result = 4 / Size of Integer
             = 4/4 
	     = 1
*/

void main()
{
        int r,x = 4;
        int *p = &x;
        int *k = p++;

         r = (char *) p - (char*) k;        
         printf("%d \n", r);
}

