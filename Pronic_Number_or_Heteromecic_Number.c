#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}