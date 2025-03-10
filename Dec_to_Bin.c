#include <stdio.h>
#include <stdlib.h>

void Dec_To_Bin(int num)
{
    int B[10],i,j;
    i=0;
    while(num > 0)
    {
        B[i] = num % 2; //Storing the reminder in array
        num=num/2;      // Divide by 2
        i++;            //increment the i value with each number
    }
    for(j=i-1;j>=0;j--)
    {
    printf("%d ",B[j]);
    }
}
int main()
{
    Dec_To_Bin(32);
    return 0;
}
