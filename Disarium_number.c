#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int d,p=0,sum=0,count=0;
    while(t>0)
    {
        t=t/10;
        count++;
    }
    
    t=n;
    
    while(n!=0)
    {
        d=n%10;
        p=pow(d,count);
        sum+=p;
        n=n/10;
        count--;
    }
    if(sum==t)
    {
        printf("True");
    }
    else{
        printf("False");
    }
    
}