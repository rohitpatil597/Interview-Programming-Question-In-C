/*Reverse Array*/
#include <stdio.h>

struct Array{
    int a[10];
    int size;
    int len;
};

void reverse_array(struct Array A)
{
  int i;
  for(i=A.size-1;i>=0;i--)
  {
      printf("%d\t",A.a[i]);
  }
  
}
int main()
{
struct Array Reverse={{16,22,33,4,59},5,5};
reverse_array(Reverse);
return 0;
}
