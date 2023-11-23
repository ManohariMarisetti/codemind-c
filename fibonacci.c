#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=a+b,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
    }
}