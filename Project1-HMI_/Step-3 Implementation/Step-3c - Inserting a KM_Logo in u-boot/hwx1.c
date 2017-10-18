#include<stdio.h>
#include <stdlib.h>
int main()
{

 FILE *fptr;
 FILE *text;
 int c;
system("convert linux.bmp -flip mkc.bmp");
fptr=fopen("/home/mk/mkc.bmp","r");
//int system(const char "convert 3.bmp -flip 3.bmp");
                if(fptr==NULL)
                {
                        printf("NOTHING In FILE");
                        fclose(fptr);
                }
                else
                {
printf("#ifndef CONFIG_SPL_BUILD\n");
printf("unsigned int const image1[] __attribute__((aligned(4)))= { \n");
                        int x=0;
                                do
                                 {
                                        int i;
                                        for(i=0;i<=2;i++)
                                                {
                                                        c=fgetc(fptr);
                                                        x+=c<<(8*i) ;
                                                }
			
                                                printf("0x%x , \n",x);
                                                x=0;
                                 }while(c!=EOF);

printf("};\n#endif\n");
}

fclose(fptr);
return 0;
}

