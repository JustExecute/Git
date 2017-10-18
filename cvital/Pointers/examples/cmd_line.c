#include <stdio.h>

int main( int argc, char *argv[] )  
{

   printf ("argc:%d\n",argc);
   if( argc == 2 )
   {
      printf("The argument supplied is argv[0]:%s argv[1]:%s\n", argv[0],argv[1]);
   }
   else if( argc > 2 )
   {
      printf("Too many arguments supplied.\n");
   }
   else
   {
      printf("One argument expected.\n");
   }
}
