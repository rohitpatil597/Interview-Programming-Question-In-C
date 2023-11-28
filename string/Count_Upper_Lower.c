#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="RoHiTPatIl";
    int i,upper,lower;
    for(i=0;str[i] !='\0';i++)
    {
        
        if(str[i] >= 'A' && str[i] <='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    printf("%d",upper);
    printf("\n%d",lower);
    return 0;
}
