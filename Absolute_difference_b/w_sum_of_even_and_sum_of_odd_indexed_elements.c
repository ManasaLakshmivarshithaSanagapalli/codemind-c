#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    if(sum2>sum)
    {
        printf("%d",sum2-sum);
    }
    else
    {
        printf("%d",sum-sum2);
    }
}