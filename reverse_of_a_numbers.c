#include<stdio.h>
int main()
{
    int num,d,rev=0;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
 return 0;   
}