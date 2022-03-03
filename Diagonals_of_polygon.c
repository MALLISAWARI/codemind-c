#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    k=n*(n-3)/2;
    printf("%d", k);
}