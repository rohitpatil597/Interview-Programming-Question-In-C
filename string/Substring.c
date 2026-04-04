#include <stdio.h>
#include <string.h>
#include <stdint.h>

int found_substring(char *str1,char *str2)
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }

        }
       if(str2[j] == '\0')
       return i;
    }
    return -1;
}
int main()
{
    char *str1="Rohit Patil";
    char *str2="t p";
    int index;
    index=found_substring(str1,str2);
    if(index > 0)
    {
        printf("Found String");
    }
    else
    {
        printf("Not Found String");
    }
    return 0;
}
