/*Transpose Matrix*/
#include <stdio.h>

int main()
{
    int a[10][10],Trans[10][10],i,j,m,n;
    printf("Enter the no of rows and coloumn\n");
    scanf("%d %d",&m,&n);
    printf("Enter Matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);

    printf("Transpose of Matrix\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    Trans[i][j]=a[j][i];
    printf("%d\t",Trans[i][j]);
    }
    printf("\n");
    }
    return 0;
}
