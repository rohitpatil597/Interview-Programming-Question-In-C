#include <stdio.h>
#include <stdint.h>


int main()
{
    uint8_t data=0xA;
    int i=0;
    int pos=0;
    if(data==0)
    printf("Not found");
    else
    {
        while(!(data & 1))
        {
            data=data>>1;
            pos++;
        }
           printf("%d",pos);
    }

   return 0;
}
