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
    int a,b;
    scanf("%d%d",&a,&b);
    int p=-1; //Initialise 'p' to a invalid index
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            p=i;
        }
    }
    //if there is no element outside a&b
    //then print -1 as result
    if(p==-1) {
        printf("-1");
        return 0;
    }
    
    int q=arr[0];
    for(i=0;i<n;i++)
    {
        if(q<arr[i]) q=arr[i];
    }
    printf("%d",q);
}