#include <stdio.h>
#include <stdlib.h>

void dec_to_hex(int num)
{
    int i=1,j,temp;
    int dec_hex[100];
    while(num!=0)
    {
        temp=num % 16;
        if(temp < 10)
        temp=temp+48;
        else
        temp=temp+55;
        
        num=num /16;
        dec_hex[i]=temp;
        i++;
    }
    for(j=i-1;j>0;j--)
    printf("%c",dec_hex[j]);
}
int main()
{
    dec_to_hex(45);
    return 0;
}
