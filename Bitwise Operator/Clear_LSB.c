/*Clear LSB to ith Poisition */

#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t data=15;
    uint8_t i=2;
    uint32_t mask=0;
    
    mask=(1 << (i+1));
    mask=mask-1;
    mask=~mask;
    
    data=data&mask;
    
    printf("0x%x",data);
    return 0;
}
