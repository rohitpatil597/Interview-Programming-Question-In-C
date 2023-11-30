/*Implememting Memcpy */
#include <stdio.h>
#include <string.h>

void mem_cpy(void *str1,void *str2,size_t num)
{
    char *src=(char *)str1;
    char *dest=(char *)str2;
    int i;
    for(i=0;i<num;i++)
    {
        dest[i]=src[i];
    }
}
int main()
{
    char str[]="Rohit";
    char dest[100];
    mem_cpy(str,dest,strlen(str));
    printf("%s",dest);
    return 0;
}
