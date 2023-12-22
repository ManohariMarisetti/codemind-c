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
    int count1=0,count2=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count1++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}