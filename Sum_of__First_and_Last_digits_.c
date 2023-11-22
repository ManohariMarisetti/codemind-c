#include<stdio.h>
int main()
{
    int n,ld,fd,sum;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    sum=ld+fd;
    printf("%d",sum);
}