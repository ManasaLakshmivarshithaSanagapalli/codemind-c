#include<stdio.h>
int main()
{
    int n,d,sum=0,product=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum+=d;
        product*=d;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}