#include<stdio.h>
int main()
{
    float x,y,l,lp;
    scanf("%f%f",&x,&y);
    l=x-y;
    lp=(l/x)*100.0;
    printf("%.2f",lp);
}