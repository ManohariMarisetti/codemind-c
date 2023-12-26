#include <stdio.h>
int main() {
	int n, i; 
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &arr[i]);
	}
	int A, B;
	scanf("%d%d", &A, &B);
	int flag = 0;
	for (i = 0; i < n; i++)
	{
	    if (arr[i] < A || arr[i] > B) 
	    {
	        printf("%d ", arr[i]);
	        flag = 1;
	    }
	}
	if (flag == 0)
	{
	    printf("-1");
	}
}