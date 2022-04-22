#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    printf("%d
",sum);
    for(i=n/2;i<n;i++)
    {
        sum1+=arr[i];
    }
    printf("%d ",sum1);
}