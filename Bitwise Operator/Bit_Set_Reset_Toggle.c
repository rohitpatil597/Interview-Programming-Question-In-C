/*Toggle,Clear,Set Bit */

#include <stdio.h>
#include <inttypes.h>

void Set_Clear_Toggle(uint32_t data,uint8_t pos)
{
    data |=(1<<pos);
    printf("Set Data=%d",data);
    data &=~(1<<pos);
    printf("\nClear Data=%d",data);
    data ^=(1<<pos);
    printf("\nToggle Data=%d",data);
}
int main()
{
   // printf("Hello World");
   Set_Clear_Toggle(8,4);
   
    return 0;
}
