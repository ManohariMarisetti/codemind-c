#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        printf("%d",i);
    }
}