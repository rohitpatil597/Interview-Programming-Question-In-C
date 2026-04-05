#include <stdio.h>

#define max(num1,num2,num3)   ((num1 > num2 && num1 > num3) ? num1 : ((num2 > num3)? num2 :num3))
#define min(num1,num2,num3)   ((num1 < num2 && num1 < num3) ? num1 : ((num2 < num3)? num2 :num3))
int main()
{
    
    printf("%d",min(1,4,0));
    return 0;
}
