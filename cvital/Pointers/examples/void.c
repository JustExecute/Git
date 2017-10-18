/* When a pointer variable is declared using keyword void – it becomes a general purpose pointer variable. Address of any variable of any data type (char, int, float etc.)can be assigned to a void pointer variable.*/

#include<stdio.h>

void main()
{

int a=10;
float b=35.75;
void *ptr; // Declaring a void pointer

ptr=&a; // Assigning address of integer to void pointer.

printf("The value of integer variable is= %d\n",*( (int*) ptr) );// (int*)ptr - is used for type casting. Where as *((int*)ptr) dereferences the typecasted void pointer variable.

ptr=&b; // Assigning address of float to void pointer.

printf("The value of float variable is= %f\n",*( (float*) ptr) );

}
