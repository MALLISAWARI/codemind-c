#include<stdio.h>
int main()
{
    int n,s=0,p=1,d=0,diff;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        p=p*d;
        s=s+d;
        n=n/10;
        diff=p-s;
    }
    printf("%d",diff);
    return 0;
}