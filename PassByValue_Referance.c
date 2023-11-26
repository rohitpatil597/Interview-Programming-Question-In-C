/*Pass by Value and Referance */

#include <stdio.h>

void Pass_by_referance(int *a,int *b)
{
     int c;
     c=*a;
    *a=*b;
    *b=c;
    printf("\nFor Passing Referance of a=%d and b=%d",*a,*b);
}

void Pass_by_value(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("\nFor Passing Value of a=%d and b=%d",a,b);
}

int main()
{
    int a=10;
    int b=20;
    printf("Actual Value of a=%d and b=%d",a,b);
    Pass_by_value(a,b);
    Pass_by_referance(&a,&b);
    printf("\nValue_1 of a=%d and b=%d",a,b);
    return 0;
}
