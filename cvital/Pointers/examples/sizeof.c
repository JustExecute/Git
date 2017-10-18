/*You can also implement using function instead of macro, but function implementation cannot be done in C as C doesn’t support function overloading and sizeof() is supposed to receive parameters of all data types.*/

#define my_sizeof(type) (char *)(&type+1)-(char *)(&type)
int main()
{
    int x;
    printf ("%ld \n",(char *)(&x+1)- (char *)(&x));
    printf ("%x, %x \n",(unsigned int *) (&x+1),(unsigned int *)(&x));
    printf("&x:%p %d\n", &x, my_sizeof(x));
    getchar();
    return 0;
}


//my_sizeof()


