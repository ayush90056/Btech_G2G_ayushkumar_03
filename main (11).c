#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("traingle is valid.\n");
        if(a==b==c){
        printf("equilateral");
       } else if (a==b||b==c||c==a)
        printf("isosceles");
        else
        printf("scalene");
    }
    else
    printf("indvalid");
    return 0;
    }