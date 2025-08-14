// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct array{
    int A[10];
    int size;
    int len;
};

int find_miss(struct array arr)
{
    int i;
    int xor_all=0;
    int xor_num=0;
    for(i=0;i<=arr.size;i++)
    {
        xor_all ^=i;   // Xor with all Num
    }
    for(i=0;i<=arr.size;i++)
    {
        xor_num ^=arr.A[i];  //Xor with given array num
    }
    return xor_all ^ xor_num;  //return missing num
}
int main()
{
    struct array arr={{3,2,4,0},4,4};
    printf("%d",find_miss(arr));
    return 0;
}
