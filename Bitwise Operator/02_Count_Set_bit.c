#include <stdio.h>
#include <stdlib.h>

int count_bit(int num)
{
    int count=0;
    while(num !=0 )
    {
        count = count+ (num & 1); //make AND with last bit and increment the count
        num=num>>1;         // right shoft by 1 with each iteration
    }
    return count;       
}
int main()
{
    int data=count_bit(15);
    printf("%d",data);
    return 0;
}
