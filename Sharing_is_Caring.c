#include<stdio.h>
int main()
{
    int c,stu;
    scanf("%d%d",&c,&stu);
    if(stu*(stu + 1)/2 <=c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}