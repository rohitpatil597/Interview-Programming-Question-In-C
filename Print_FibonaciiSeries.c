#include <stdio.h>
#include <stdlib.h>

int fib(int num)
{
    int t0=0,t1=1,s;
    int i;
    if(num <= 1)
    {
    return num;
    }
    else
    {
    for(i=2;i<=num;i++)
    {
    s=t0+t1;
    t0=t1;
    t1=s;
    }
    }
    return s;
}
int main()
{
    for(int i=0;i<5;i++)
    printf("%d ",fib(i));
    return 0;
}
