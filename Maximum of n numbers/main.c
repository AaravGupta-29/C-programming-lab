#include<stdio.h>
int main()
{
  int n,c,max=-999999999;
  printf("enter the number of elements:");
  scanf("\n%d",&n);

  for(int i=1;i<=n;i++)
  {
      printf("Enter element %d: ", i);
        scanf("\n%d", &c);

        if (c>max) max=c;
  }

  printf("max number:%d\n",max);
  return 0;
}
