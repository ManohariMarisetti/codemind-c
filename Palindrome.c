#include<stdio.h>
int main()
{
    int i,n,rev=0,d,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}