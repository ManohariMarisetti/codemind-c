#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    y= (x%4==0)?(x/4) : (x/4)+1;
    printf("%d",y);
}