#include<stdio.h>
int main()
{
    int n,i,m,k,arr[100],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=m && arr[i]<=k || arr[i]<=m && arr[i]>=k)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}