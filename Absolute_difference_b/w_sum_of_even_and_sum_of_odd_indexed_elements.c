#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int even_sum=0,odd_sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            even_sum+=arr[i];
        }
        else if(i%2==1)
        {
            odd_sum+=arr[i];
        }
    }
    printf("%d",abs(even_sum - odd_sum));
}