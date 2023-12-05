/*Bubble Sort */

#include <stdio.h>

struct array{
    int arr[10];
    int size;
};
int main()
{
    struct array Arr={{2,8,3,9,12,6,1},7};
    int i,j,temp;
    int n=Arr.size;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(Arr.arr[j]>Arr.arr[j+1])
           {
               temp=Arr.arr[j];
               Arr.arr[j]=Arr.arr[j+1];
               Arr.arr[j+1]=temp;
           }
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",Arr.arr[i]);
    return 0;
}
