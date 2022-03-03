#include<stdio.h>
int main()
{
    int n,r,c,s=0;
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(c==s)
    printf("True");
    else
    printf("False");
}