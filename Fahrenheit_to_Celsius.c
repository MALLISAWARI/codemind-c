#include<stdio.h>
int main()
{
    int f;
    float c;
    scanf("%d %f", &f,&c);
   c=(f-32)/1.8;
    printf("%.2f", c);
}