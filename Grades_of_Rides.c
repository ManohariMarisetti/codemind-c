#include<stdio.h>
int main()
{
    int h,spin,speed;
    scanf("%d%d%d",&h,&spin,&speed);
    if(h>50 && spin>60 && speed>100)
    {
        printf("10");
    }
    else if(h>50 && spin>60)
    {
        printf("9");
    }
    else if(spin>60 && speed>100)
    {
        printf("8");
    }
    else if(speed>100 && h>50)
    {
        printf("7");
    }
    else if(h>50 || spin>60 || speed>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
