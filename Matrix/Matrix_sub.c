/*Matrix subtraction */
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],sub[10][10],i,j,m,n;
    printf("Enter the no of rows and coloumn\n");
    scanf("%d %d",&m,&n);
    printf("1st Matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    
    printf("2nd Matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    
    printf("Sum of Matrix\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    sub[i][j]=a[i][j] - b[i][j];
    printf("%d\t",sub[i][j]);
    }
    printf("\n");
    }
    return 0;
}
