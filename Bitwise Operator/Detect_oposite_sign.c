#include <stdio.h>
#include <stdbool.h>

void Check_opposite_sign(int data1,int data2)
{
    int result=(data1 ^ data2)<0;
    if(result==true)
    {
        printf("Opposite sign");
    }
    else
    {
        printf("Same sign");
    }
}

int main()
{
Check_opposite_sign(-2,9);
  return 0;
}
