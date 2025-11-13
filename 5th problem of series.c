#include<stdio.h>
int main()
{
  int i,j,k,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1,j=2,k=3; i<=n; i=i+1,j=j+1,k=k+1)
    {

      sum=sum+(i*j*k);
    }
    printf("\n sum of the series =%d \n",sum);
}
