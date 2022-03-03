#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp,c=1,i,p=1;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    temp=sum;
    sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        for(i=1;i<=c;i++)
        {
            p=p*rem;
        }
        sum=sum+p;
        temp=temp/10;
        c++;
        p=1;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
    
    
}