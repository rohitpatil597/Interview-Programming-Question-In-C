#include <stdio.h>
#include <stdlib.h>

void dec_to_Oct(int num)
{
    int i=0,j=0;
    int dec_Oct[100];
    while(num!=0)
    {
        dec_Oct[i]=num %8;
        num=num /8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",dec_Oct[j]);
}
int main()
{
    dec_to_Oct(33);
    return 0;
}
