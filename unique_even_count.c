#include<stdio.h>
int main()
{
    int n,i,j,k=0,arr[100],b[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            b[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[i]== b[j] && i!=j)
            {
                b[j]=-1;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(b[i]!=-1)
        {
            c++;
        }
    }
    printf("%d",c);
}