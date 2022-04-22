#include<stdio.h>
int linear_search(int *arr,int n,int avg)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,arr[100],i,sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    if(linear_search(arr,n,avg))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   }
