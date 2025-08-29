#include <stdio.h>
#include <stdint.h>

#define Check_bit_set_Or_Not(data,pos)   ((((data >> pos) & 0x1))==1) ? printf("It set") : printf("not set")

int main() 
{
Check_bit_set_Or_Not(0x8,2);
}
