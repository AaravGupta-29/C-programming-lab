#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int tp=0,ts=0,ans=0;
    for(int i=1;i<=num;i++)
    {
        printf("%d\t",ts);
        tp=ts;
        ts=ans;
        ans=tp+ts;
    }
    return 0;
}
