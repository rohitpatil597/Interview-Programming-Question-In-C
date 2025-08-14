
#include <stdint.h>
#include <stdio.h>

int check_alternate_bit_pos(uint8_t data)
{
   uint8_t result=data ^(data >> 1);
   return ((result & (result +1))==0);
    
}
int main()
{
    uint8_t result=check_alternate_bit_pos(0xA);
    if(result)
    {
        printf("have alternate bits");
    }
    else
    {
         printf("dont have laternate bits");   
    }

    return 0;
}
