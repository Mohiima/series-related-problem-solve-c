// 1+3+5+....upto n'th term

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the last number of the series ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2) //between 1&3 difference is 2
    {
        sum=sum+i;
    }
    printf(" =%d\n",sum);
}
