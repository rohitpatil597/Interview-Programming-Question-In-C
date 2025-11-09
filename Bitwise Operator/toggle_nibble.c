#include <stdio.h>
#include <stdint.h>

uint16_t led_Val=0xAA;

int main()
{
    int i=0;
    do{
        led_Val ^=(0x0F);
        i++;
        printf("0x%x\n",led_Val);
    }while(i<5);
    return 0;
}
