/*Count Set Bit */

#include <stdio.h>
#include <inttypes.h>

int count_set_bit(uint32_t data)
{
int count=0;
while(data !=0)
{
    data &=data-1;
    count++;
}
return count;
}
int main()
{
printf("%d", count_set_bit(8));
   
    return 0;
}
