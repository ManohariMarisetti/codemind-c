#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        printf("%d %d ",arr[i],arr[j]);
    }
    if(n%2==1)
    {
        printf("%d %d",arr[j],0);
    }
}