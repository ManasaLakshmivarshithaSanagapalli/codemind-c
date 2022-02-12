#include<stdio.h>
int main()
{
    int num,d,sum=0,product=1;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
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