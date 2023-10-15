#include<stdio.h>
int main()
{
    int x,y,p,q,r,s;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    x=p+q;
    y=r+s;
    if(x<y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}