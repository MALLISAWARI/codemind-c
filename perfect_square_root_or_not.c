#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}