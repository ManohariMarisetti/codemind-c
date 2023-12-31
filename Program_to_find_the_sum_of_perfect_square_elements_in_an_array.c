#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        int x=sqrt(arr[i]);
        if( x*x== arr[i])
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}