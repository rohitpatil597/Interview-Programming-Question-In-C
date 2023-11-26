/*Change Little and Big Endian in c*/

#include <stdio.h>
#include <inttypes.h>

uint32_t change_endianess(uint32_t data)
{
    uint32_t Result;
    
    Result |= (0x000000FF &data) <<24;
    Result |= (0x0000FF00 &data) <<8;
    Result |= (0x00FF0000 &data) >>8;
    Result |= (0xFF0000FF &data) >>24;
    
    return Result;
}
int main()
{
uint32_t Result;
Result=change_endianess(0x11223344);
printf("0x%x",Result);

    return 0;
}
