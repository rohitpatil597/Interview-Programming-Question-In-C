#include <stdio.h>
#include <string.h>

int atoi_1(char *str)
{
    int res=0;
    for(int i=0;str[i] !='\0';i++)
    {
        res=res*10+str[i]-'0';
    }
    return res;
}
int main()
{
    char *str="1234";
    printf("%d",atoi_1(str));
    return 0;
}
