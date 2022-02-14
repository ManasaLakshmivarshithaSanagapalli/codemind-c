#include<stdio.h>
int main()
{
    int l,b,w,c,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l*b-(l-2*w)*(b-2*w));
    if(l-2*w<=0 || b-2*w<=0)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",area*c);
    }
}