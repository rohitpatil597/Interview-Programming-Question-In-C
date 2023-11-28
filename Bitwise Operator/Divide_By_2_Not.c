#include <stdio.h>

int main()
{
int data;
printf("Enter the data:");
scanf("%d",&data);
if(data !=0)
{
if(data & 1)
{
    printf("Its is not divided by 2");
}
else
{
    printf("Its is divided by 2");
}
}
else
{
    printf("Not Possible");
}

return 0;
}
