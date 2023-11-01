#include<stdio.h>
int main()
{
    int a,b,oper;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    printf("enter operator");
    scanf("%d",&oper);
    if(oper==1)printf("add is %d",a+b);
    if(oper==2)printf("sub is %d",a-b);
    if(oper==3)printf("mult is %d",a*b);
    if(oper==4)printf("div is %d",a/b);
    return 0;
    }
