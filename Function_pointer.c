/*Function Pointer in c*/

#include <stdio.h>

int Fun_ptr(int a)
{
    printf("%d",a);
}
int main()
{
int (*ptr)()=&Fun_ptr;
(*ptr)(10);
return 0;
}
