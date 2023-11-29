#include <stdio.h>

#define swap_even_data(data)  ((data & 0xAAAAAA) >> 1) | ((data & 0x55555555) << 1)

int main()
{
    unsigned int data=56;
    printf("%d",swap_even_data(data));
    return 0;
}
