#include<stdio.h>
int factorcount(int num)
{
    int fc=0,i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            fc++;
        }
    }
    return fc;
}
int main()
{
    int num,fc;
    scanf("%d",&num);
    fc=factorcount(num);
    if(fc==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}