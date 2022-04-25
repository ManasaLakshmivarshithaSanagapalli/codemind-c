#include<stdio.h>
int main()
{
    int n,m,i,h=0,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            h+=i;
        }
    }
    if((n==h)&&(m==s))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}