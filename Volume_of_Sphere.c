#include<stdio.h>
int main()
{
    float area,r;
    scanf("%f",&r);
    area= (4*3.14*(r*r*r))/3;
    printf("%.2f",area);
}