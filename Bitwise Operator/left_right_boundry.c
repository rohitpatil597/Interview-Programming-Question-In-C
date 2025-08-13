#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void bitwise_left_right_boundry(int data_left, int data_right)
{
    int result=data_left;
    while(!(data_right==data_left))
    {
        result &=data_right--;
    }
    printf("%d",result);
}

int main()
{
    
    bitwise_left_right_boundry(11,15);
    return 0;
}
