#include<stdio.h>
int main()
{
    int x,y,p,flag=1;
    scanf("%d%d%d",&x,&y,&p);
    if(y<x)
    {
        int t=x;
        x=y;
        y=t;
    }
    while(x<=y){
    if(x==y)
    {
        flag=0;
        break;
    }
    x=x+p;
    y=y-p;
    }
    if(flag==0)
    {
        printf("YES"); 
    }
    else
    {
        printf("NO");
    }
}