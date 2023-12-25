#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=sum/n) count++;
    }
    printf("%d",count);
}