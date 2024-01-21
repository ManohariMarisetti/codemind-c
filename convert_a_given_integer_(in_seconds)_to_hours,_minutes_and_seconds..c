#include<stdio.h>
int main()
{
    int n,hours,min,secs;
    scanf("%d",&n);
    hours=n/3600;
    min=(n%3600)/60;
    secs=(n%3600)%60;
    printf("H:M:S-%d:%d:%d",hours,min,secs);
}