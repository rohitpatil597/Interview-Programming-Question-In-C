#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

struct array{
    int A[10];
    int size;
    int len;
};
int max=0;

void max_min_XOR(struct array arr)
{

    int i,j;
    
    max=arr.A[0] ^ arr.A[1];
    
    for(i=2;i<=arr.size-1;i++)
    {
        for(j=2;j<=arr.size-1;j++)
        {
            if(i !=j)
            {
            if(max < (arr.A[i] ^ arr.A[j]))
            {
                max=arr.A[i] ^ arr.A[j];
            }
            }
        }
    }
    printf("%d ",max);
}

int main()
{
    
    struct array arr={{233, 10, 35, 25, 2, 68},6,6};
    max_min_XOR(arr);
    return 0;
}
