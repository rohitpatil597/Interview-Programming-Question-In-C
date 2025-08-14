// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int count_set_Bit(int data)
{
    int count=0;
    while(data)
    {
        count+=data &1;
        data=data>>1;
    }
    return count;
}
void change_bit_setting(int data1,int data2)
{
int result=data1 ^ data2;
printf("%d",count_set_Bit(result));
}
int main()
{
change_bit_setting(29,15);
    return 0;
}
