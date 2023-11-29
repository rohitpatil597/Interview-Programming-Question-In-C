/*Swap Nibble Using Bitwise Operator */
#include <stdio.h>

#define Swap_nibble(data)  (data & 0x0F) << 4 | (data & 0xF0) >>4
int main()
{
    int result=Swap_nibble(100);
    
    printf("%d",result);

    return 0;
}
