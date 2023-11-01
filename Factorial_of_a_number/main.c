#include<stdio.h>
int main()
{
    int p=1;
    int number;
    printf("enter number:");
    scanf("\n%d",&number);
    for(int i=1;i<=number;i++)
        p *=1;
    printf("Factorial of %d:%d\n",number,p);
    return 0;
}
