#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,h=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    for(i=0;str[i]!=NULL;i++)
    {
        h++;
    }
    printf("%d",h-c);
}