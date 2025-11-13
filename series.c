// 2.1+5.3+8.5+......upto n'th term
// here .=multiple
#include<stdio.h>
int main()
{
  int i,j,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=2 ,j=1; i<=n; i=i+3, j=j+2)
    {

      sum=sum+(i*j);
    }
    printf("\n sum of the series =%d \n",sum);
}
