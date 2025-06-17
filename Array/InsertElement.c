#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct arr{
    int data[10];
    int size;
};

void Insert(struct arr *a,int pos,int x)
{
    int i=0;
    for(i=a->size-1;i>pos;i--)
    {
         a->data[i+1]= a->data[i];
         a->data[i]=x;
    }
    for(i=0;i<=a->size;i++)
    printf("%d",a->data[i]);
}
int main()
{
    struct arr a={{1,2,3,4,5},5};
    Insert(&a,2,9);
    return 0;
}
