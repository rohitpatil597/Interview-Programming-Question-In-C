/*Adding two number using Bitwise*/

#include <stdio.h>

int add(int a,int b)
{
    int carry;
    while(b!=0)
    {
        carry = (a) & b;
        a=a^b;
        b=carry << 1;
    }
    return a;
}
int main()
{
    int result=add(9,9);
    printf("%d",result);
    return 0;
}
