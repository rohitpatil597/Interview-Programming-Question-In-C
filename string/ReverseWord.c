/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "string.h"

void reverseWord(char str[],int start,int end)
{
    int i;
    while(start < end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
   char input[]="EHT YOB SI GNIYALP";
   int start=0;
   int i=0;
   while(1){
   if(input[i] == ' ' || input[i] == '\0')
   {
       reverseWord(input,start,i-1);
       if(input[i] == '\0') break;
       start=i+1;
   }
   i++;
   }
       printf("Output: %s\n", input);
    return 0;
}
