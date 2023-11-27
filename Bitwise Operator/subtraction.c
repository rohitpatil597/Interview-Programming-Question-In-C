/*Subtraction two number using Bitwise*/

#include <stdio.h>

int subtract(int a,int b)
{
    int borrow;
    while(b!=0)
    {
        borrow=(~a) & b;
        a=a^b;
        b=borrow << 1;
    }
    return a;
}
int main(){
    int a=30,b=10;
    int result=subtract(a,b);
    printf("Result=%d",result);
    return 0;
}
