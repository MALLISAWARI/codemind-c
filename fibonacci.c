#include<stdio.h>
int main()
{
    int n,i,c,a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}