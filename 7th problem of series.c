// 1*2*3*4*...upto nth term

#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("enter number ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("=%d",result);
}


