#include<stdio.h>
int main()
{
    int n,d,sq,sq2,h,rev=0,rev2=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    sq2=rev*rev;
    while(sq2!=0)
    {
        h=sq2%10;
        sq2=sq2/10;
        rev2=rev2*10+h;
    }
    if(rev2==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}