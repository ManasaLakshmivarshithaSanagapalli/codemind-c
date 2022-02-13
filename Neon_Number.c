#include<stdio.h>
int main()
{
    int num,d,sq,sum=0;
    scanf("%d",&num);
    sq=num*num;
    while(sq)
    {
        d=sq%10;
        sq=sq/10;
        sum+=d;
    }
    if(num==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}