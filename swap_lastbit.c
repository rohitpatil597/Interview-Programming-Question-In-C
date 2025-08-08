#include <stdio.h>
#include <stdint.h>

uint8_t a=0xB5; 
uint8_t b=0x8F;
uint8_t temp1;

int main()
{
      temp1=a;
      a=(a >> 4)+(b << 4);
      a=(a>>4)+(a << 4);
      printf("a=0x%X\n",a);
      b=(b >> 4)+(temp1 << 4);
      b=(b >> 4)+(b << 4);
      printf("b=0x%X",b);
     return 0;
}
