#include<stdio.h>
#include<math.h>
int main()
{
    double s1,s2,h;
    scanf("%lf%lf",&s1,&s2);
    h= sqrt(pow(s1,2)+pow(s2,2));
    printf("%.2f",h);
}