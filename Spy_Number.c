#include<stdio.h>
int main()
{
    int n,rem,temp,sum=0,pro=1;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
     rem=n%10;
     sum=sum+rem;
     pro=pro*rem;
     n=n/10;
    }
    if(sum==pro)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}