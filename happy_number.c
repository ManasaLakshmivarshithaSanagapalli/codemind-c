#include<stdio.h>
int main()
{
    int n,d,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(sum!=1 && sum!=4 && sum!=9)
    {
        sum=0;
        while(temp)
        {
            d=temp%10;
            temp=temp/10;
            sum=sum+d*d;
        }
    temp=sum;
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}