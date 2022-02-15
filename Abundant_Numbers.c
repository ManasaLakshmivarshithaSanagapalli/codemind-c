#include<stdio.h>
int factorsum(int num)
{
    int i,fs,factorsum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            fs=fs+i;
        }
    }
    return fs;
}
int main()
{
    int num,fs;
    scanf("%d",&num);
    fs=factorsum(num);
    if(fs>num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
