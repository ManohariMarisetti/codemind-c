#include<stdio.h>
int main()
{
    int n,i,sq_sum=0,x=0,y=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       // x=i*i;
        sq_sum+=i*i;
        y+=i;
    }
    printf("%d",(y*y)-sq_sum);
}
