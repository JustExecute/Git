
#include<stdio.h>
#include<unistd.h>


int g_var=10;

int main()
{

int ret;

ret= fork();
        switch(ret)
        {
        case -1:
                printf("fork() failed\n"); 
		break;
        case 0:
               
		printf("Child Process Before Modification,g_var=%d\n",g_var);	
		g_var=456;
                printf(" Child Process After Modifcation,g_var=%d\n",g_var);
                break;
        default:
                printf("Parent Process Before Modification,g_var=%d\n",g_var);
		g_var=123;
                printf("Parent Process After Modification ,g_var=%d\n",g_var);

        }
}

