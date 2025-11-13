// 1^2+3^2+5^2+.... upto n'th term
#include<stdio.h>
int main()
{
  int i,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {

      sum=sum+(i*i);
    }
    printf("\n sum of the series =%d \n",sum);
}
