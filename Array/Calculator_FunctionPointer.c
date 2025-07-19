#include <stdio.h>
#include <stdio.h>

void mul(int a,int b)
{
    printf("%d %d %d",a,b,a*b);
}
void diva(int a,int b)
{
    printf("%d %d %d",a,b,a/b);
}
void add(int a,int b)
{
    printf("%d %d %d",a,b,a+b);
}
void sub(int a,int b)
{
    printf("%d %d %d",a,b,a-b);
}
int main()
{
    int choise;
    int num1,num2;
    void(*ptr[])(int,int)={mul,diva,add,sub};
    printf("Enter your choise:");
    scanf("%d",&choise);
    printf("Enter your Number:");
    scanf("%d %d",&num1,&num2);
    (*ptr[choise])(num1,num2);
    return 0;
}
