#include<stdio.h>
int main()
{
    int p,c,b,m,cs,t;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    t=((p+c+b+m+cs)*100 ) /(500.0) ;
    if(t>=90){
        printf("Grade A");
    }
    else if(t>=80 && t<90){
        printf("Grade B");
    }
    else if(t>=70 && t<80){
        printf("Grade C");
    }
    else if(t>=60 && t<70){
        printf("Grade D");
    }
    else if(t>=40 && t<60){
        printf("Grade E");
    }
    else if(t<40){
        printf("Grade F");
    }
}