#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50 && b>60 && c>100)
    {
        printf("%d",10);
    }
    else if(a>50 && b>60)
    {
        printf("%d",9);
    }
    else if(b>60 && c>100)
    {
        printf("%d",8);
    }
    else if(a>50 && c>100)
    {
        printf("%d",7);
    }
    else if(a>50 || b>60 || c>100)
    {
        printf("%d",6);
    }
    else
    {
        printf("5");
    }
}