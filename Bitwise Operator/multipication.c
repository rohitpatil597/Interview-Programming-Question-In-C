/*Multipication two number using Bitwise*/

#include <stdio.h>

int multipication(int a,int b)
{
int res=0;
while(b > 0)
{
    
   if(b&1)
    res=res+a;
    a=a<<1;
    b=b>>1;
}
return res;
}
int main(){
    int a=10,b=10;
    int result=multipication(a,b);
    printf("Result=%d",result);
    return 0;
}
