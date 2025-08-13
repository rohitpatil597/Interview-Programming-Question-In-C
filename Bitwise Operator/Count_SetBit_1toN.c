#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int count=0;
void Count_SetBit_1toN(int data)
{
for(int i=1;i<=data;i++)
{
    int x =i;
    while(x)
    {
        count += x & 1;
       
        x=x>>1;
        
    }
}
    printf("%d",count);
}

int main()
{
    Count_SetBit_1toN(5);
    return 0;
}
