/*Toggle,Clear,Set Bit */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define set(reg_val,n)        reg_val |= (1 << n)
#define Reset(reg_val,n)      reg_val &= ~(1 << n)
#define Toggle(reg_val,n)     reg_val ^= (1 << n)

int main()
{
uint32_t data= 0xA;
 printf("0x%x\n",set(data,0));
 printf("0x%x\n",Reset(data,1));
 printf("0x%x",Toggle(data,3));
 return 0;
}
