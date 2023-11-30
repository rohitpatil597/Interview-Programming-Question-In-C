#include <stdio.h>
#include <string.h>

void User_Str_Cmp(const char * pBuffer1, const char * pBuffer2, const int length)
{
    int idx = 0;
    int count=0;
    for (idx = 0; idx < strlen(pBuffer1); idx++)
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
User_Str_Cmp("Rohit","RoHit",5);
return 0;
}
