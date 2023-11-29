#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],add[10][10],i,j,m,n;
    printf("Enter the no of rows and coloumn of matrix\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the 1st matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
        
    
    printf("\nEnter the 2nd matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    
 printf("Sum of entered matrices:-\n");
   
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         add[i][j] = a[i][j] + b[i][j];
         printf("%d\t", add[i][j]);
      }
      printf("\n");
   }

    return 0;
}
