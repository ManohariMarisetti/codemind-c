#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int a,b,count=0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            {
                count++;
            }
        }
        printf("%d
",count);
    }
}