/*Indentified Little and Big Endian in c*/

#include <stdio.h>
#include <inttypes.h>
int main()
{
    uint32_t data=0x11223344;
    uint8_t *ptr=(uint8_t *)&data;

    if(*ptr==0x11)
    {
        printf("Big Endian");
    }
    else if(*ptr==0x44)
    {
         printf("Little Endian");
    }
    printf("\n0x%x",*ptr);
    return 0;
}
