#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int p;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 1)
        {
            p=arr[i];
        }
    }
    printf("%d",p);
}