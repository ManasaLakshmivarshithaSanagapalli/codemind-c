#include<stdio.h>
int main()
{
    int n,i,arr[100],m=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}