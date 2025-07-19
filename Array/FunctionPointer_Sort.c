#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>


  
bool Assending(int a,int b)
{
   return a < b;
}
bool descending(int a,int b)
{
   return a > b;
}
void swap(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void sort(int *arr,int n,bool (*compare)(int,int))
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(!(compare(arr[j],arr[j+1])))
            {
            swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print_array(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
  int arr[]={9,2,4,1,10,23};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  printf("Array=====\n");
  print_array(arr,n);
  
  printf("Assending=====\n");
  sort(arr,n,Assending);
  print_array(arr,n);
  
  printf("dessending=====\n"); 
  sort(arr,n,descending);
  print_array(arr,n);
  
  return 0;
}
