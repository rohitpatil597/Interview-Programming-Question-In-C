/*Callback Function in c*/

#include <stdio.h>

void Fun_ptr(int a)
{
    printf("%d",a);
}
void function_call_back(void (*ptr)())
{
    (*ptr)(10);
}
int main()
{

function_call_back(Fun_ptr);
return 0;
}
