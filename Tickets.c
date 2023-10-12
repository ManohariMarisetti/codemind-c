#include<stdio.h>
int main()
{
    int x,r;
    scanf("%d",&x);
    r = (4 * x);
    if(r>=0 && r<=1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}