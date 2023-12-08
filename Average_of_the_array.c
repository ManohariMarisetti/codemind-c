#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float avg=0;
    for(i=0;i<n;i++)
    {
        avg+=arr[i];
    }
    printf("%.2f",avg/n);
}