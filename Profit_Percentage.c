#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float p=y-x;
    float pp=(p/x)*100.0;
    printf("%.2f",pp);
}