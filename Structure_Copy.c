#include <stdio.h>
#include <string.h>
struct example{
    int A;
    char B;
    double c;
};

void cpy_example(struct example *src,struct example *dst)
{
    memset(dst,0,sizeof(*dst));
    dst->A=src->A;
    dst->B=src->B;
    dst->c=dst->c;
}
int main()
{
   struct example arr={1,'A',5};
   struct example arr1;
   
   printf("Before Copy= %d , %c,%d",arr.A,arr.B,arr.c);
   cpy_example(&arr,&arr1);
   printf("\nAfter Copy= %d , %c,%d",arr1.A,arr1.B,arr1.c);
   return 0;
}
