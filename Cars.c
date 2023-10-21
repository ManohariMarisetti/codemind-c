#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<=4)
    {
        printf("1");
    }
    else if(x>4 && x%4!=0)
    {
        printf("%d",(x/4)+1);
    }
    else if(x>4 && x%4==0)
    {
        printf("%d", x/4);
    }
}