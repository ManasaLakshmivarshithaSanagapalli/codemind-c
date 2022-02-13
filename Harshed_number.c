#include<stdio.h>
int main()
{
    int num,temp,sum=0,d;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        d=num%10;
        num=num/10;
        sum+=d;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}