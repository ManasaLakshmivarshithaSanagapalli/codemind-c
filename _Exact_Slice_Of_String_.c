#include<stdio.h>
int main()
{
    char str[100];
    int m,n,i;
    scanf("%[^
]s",str);
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        printf("%c",str[i]);
    }
}