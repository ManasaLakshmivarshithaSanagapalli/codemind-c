#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,rev=0,temp,sum=0,dc=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    while(rev!=0)
    {
        d=rev%10;
        rev=rev/10;
        dc++;
        sum+=pow(d,dc);
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}