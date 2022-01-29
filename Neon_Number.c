#include<stdio.h>
int main()
{
    int num,sum=0,sq,rem,Neon;
    scanf("%d",&num);
    sq=num*num;
    while(sq!=0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(num==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}