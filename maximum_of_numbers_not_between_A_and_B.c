#include<stdio.h>
int main()
{
    int n,i,arr[100],m,k,max=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m && arr[i]<k || arr[i]>m && arr[i]>k)
        {
            if(max<arr[i])
            {
                max=arr[i];
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}