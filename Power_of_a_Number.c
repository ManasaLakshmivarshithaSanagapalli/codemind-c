#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M,k,mod;
    scanf("%d%d%d",&x,&y,&M);
    k=pow(x,y);
    mod=k%M;
    printf("%d",mod);
    return 0;
}