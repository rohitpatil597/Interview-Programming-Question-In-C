#include <stdio.h>
#include <stdbool.h>

void compute_sign(int data1)
{
    int result=(data1)<0;  
    if(result==true)
    {
        printf("Negative sign");
    }
    else
    {
        printf("Positive sign");
    }
}

int main()
{
compute_sign(9);
  return 0;
}
