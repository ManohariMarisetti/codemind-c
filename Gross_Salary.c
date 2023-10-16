#include<stdio.h>
int main()
{
    int BS,DA,HRA;
    scanf("%d",&BS);
    if(BS<=10000)
    {
        printf("%.2f",BS+(0.80*BS)+(0.20*BS));
    }
    else if(BS>10000 && BS<=20000)
    {
        printf("%.2f",BS+(0.90*BS)+(0.25*BS));
    }
    else if(BS>20000)
    {
        printf("%.2f",BS+(0.95*BS)+(0.30*BS));
    }
}
    