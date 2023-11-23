#include<stdio.h>
int main()
{
    int x=0,n,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>x)
        {
            x=r;
        }
        n=n/10;
    }
    printf("%d",x);
}