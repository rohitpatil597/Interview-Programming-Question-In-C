/*Reverse String */
#include <stdio.h>
#include <string.h>

char str[10]="rohit";
char rev_str[10];
int main()
{
int i,j;
for(i=0;str[i] !='\0';i++)
{
}
i=i-1;
for(j=0;i>=0;j++,i--)
{
    rev_str[j]=str[i];
}
 
    printf("%s",rev_str);
    return 0;
}
