/*Delete the element from Array */

#include <stdio.h>

struct array{
    int A[10];
    int len;
    int size;
};

void delete_array(struct array *a,int pos)
{
    int i;
    for(i=pos;i<a->size-1;i++)
    {
       a->A[i]=a->A[i+1];
    }
    for(i=0;i<a->size-1;i++)
    {
        printf("%d\t",a->A[i]);
    }
}
int main()
{
    struct array A={{1,22,34,9,5},5,5};
    delete_array(&A,3);
    return 0;
}
