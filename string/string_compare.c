/*Compare two string */
#include <stdio.h>
#include <string.h>

const int len(const char* str)
{
    int i;
    for(i=0;str[i] !='\0';i++)
    {
        
    }
    //printf("\n%d",i);
    return i;
}
void User_Str_Cmp(const char * pBuffer1, const char * pBuffer2)
{
    int idx = 0;
    int count=0;
    for (idx = 0; idx < len(pBuffer1); idx++)
    {
        if(pBuffer1[idx] != pBuffer2[idx])
        {
            count=1;
            
        }
    }
    if(count==1)
    printf("Different");
    else
    printf("Same");
}

int main()
{
User_Str_Cmp("Rohit","RoHit");
len("Rohit");
return 0;
}
