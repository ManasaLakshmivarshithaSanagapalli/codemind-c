#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^
]s",str);
    printf("Hello Technicalhub");
    printf("
");
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%c",str[i]);
    }
}