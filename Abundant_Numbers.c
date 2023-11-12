#include<stdio.h>
int main()
{
    int n,i,f,fs=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fs+=i;
        }
    }
    if(fs>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}