#include<stdio.h>
int main()
{
    int n,i,sum=0,r,s;
    scanf("%d",&n);
    i=n*n;
    while(i>0)
    {
        r=i%10;
        sum+=r;
        i=i/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}