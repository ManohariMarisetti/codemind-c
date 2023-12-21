#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int even_sum=0,odd_sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]%2 == 0)
            {
                even_sum+=mat[i][j];
            }
            else
            {
                odd_sum+=mat[i][j];
            }
        }
    }
    printf("%d %d",even_sum,odd_sum);
}