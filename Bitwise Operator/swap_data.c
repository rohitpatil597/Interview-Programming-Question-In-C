/*Input 0xABAB output 0xAABB */

#include <stdio.h>
#include <inttypes.h>

#define Swap(data)  (data & 0xF000) | (data & 0x0F00) >>4 | (data & 0x00F0) <<4 | (data & 0x000F)
int main()
{
    uint32_t Data=0xABAB;
    int result=Swap(Data);
    
    printf("0x%x",result);

    return 0;
}
