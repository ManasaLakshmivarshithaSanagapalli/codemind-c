#include<stdio.h>
int main()
{
    int n,i,arr[100],m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}