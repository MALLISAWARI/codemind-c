#include<stdio.h>
int main()
{
    int n,m,h;
    scanf("%d %d",&n,&m);
    h=n>m?n:m;
    for(;h>=1;h--)
    {
        if(n%h==0 && m%h==0)
        break;
    }
    printf("%d",h);
}