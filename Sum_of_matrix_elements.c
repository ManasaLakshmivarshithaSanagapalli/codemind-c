#include<stdio.h>
int main()
{
    int r,c,arr[100][100],i,j,sum=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}