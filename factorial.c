/*Calculate Factorial Number in c*/

#include <stdio.h>
#include <inttypes.h>

long fact(int num)
{
    int result;
    if(num==0)
    return 1;
    else
    result=num*fact(num-1);
    return result;
}
int main()
{
    int a=5;
    printf("%ld",fact(5));
    return 0;
}
