#include<stdio.h>
int main()
{
    int n,d,m;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d>m)
        {
            m=d;
        }
        else
        {
            continue;
        }
    }
    printf("%d",m);
}
