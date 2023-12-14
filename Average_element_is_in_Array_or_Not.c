#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,avg_element=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(sum/n==arr[i])
        {
            avg_element=arr[i];
            break;
        }
    }
    if(avg_element==sum/n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}