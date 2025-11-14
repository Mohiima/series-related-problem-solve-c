#include<stdio.h>
int main()
{
    int i, j, n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1, j = 2; i <= n; i = i + 2, j = j + 2)
    {
        if(j <= n)
            sum = sum + (i - j);   // both odd & even exist
        else
            sum = sum + i;         // only odd term left (last one)
    }

    printf("Sum = %d\n", sum);

    return 0;
}
