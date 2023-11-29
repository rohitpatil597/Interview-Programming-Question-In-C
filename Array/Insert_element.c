/*Insert the element (given Poisition) into an Array */
#include <stdio.h>

struct array{
    int A[10];
    int len;
    int size;
};

void insert_array(struct array *a,int pos,int data)
{
    int i;
    for(i=0;i<a->size-1;i++)
    {
       a->A[pos]=data;
       
    }
    for(i=0;i<a->size;i++)
    {
        printf("%d\t",a->A[i]);
    }
}
int main()
{
    struct array A={{1,22,34,9,5},5,5};
    insert_array(&A,4,49);
    return 0;
}
