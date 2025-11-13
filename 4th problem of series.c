// 1.1^2+ 2.3^2+ 3.5^2+.....upto n'th term.
// here .=into multiplication
#include<stdio.h>
int main()
{
  int i,j,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1,j=1; i<=n; i=i+1,j=j+2)
    {

      sum=sum+i*(j*j);
    }
    printf("\n sum of the series =%d \n",sum);
}
