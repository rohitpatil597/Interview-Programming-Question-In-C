/*
covert 0xABAB to BBAA
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint32_t data=0xABAB;
    uint32_t Result=0;
    Result= ((data & 0x0F00)<<4) |((data & 0x000F)<<8) | ((data & 0xF000)>>8) |((data & 0x00F0)>>4) ;
    printf("%x",Result);
    return 0;
}
