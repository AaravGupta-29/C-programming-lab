#include<stdio.h>
#include<math.h>
int main ()
{
    float x1,x2,y1,y2,d;
    printf("enter the four values");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    d=sqrt(pow(x2-x1,2)+(y2-y1,2));
    printf("%f",d);
    return 0;
}
