#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t data=0xA3;
    uint8_t Result=(( data & 0x04) << 3) | (( data & 0x20) >> 3);// swapped bits

    uint8_t data1 =(data) & ~(0x04 | 0x20); // clear bits 2 and 5

    Result=Result | data1; // combine

    printf("0x%X",Result);
   return 0;
}
