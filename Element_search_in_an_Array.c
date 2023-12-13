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
    int p;
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==arr[i])
        {
            break;
        }
    }
    if(p==arr[i])
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}