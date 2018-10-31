#include <stdio.h>

int main()
{
    int n, i, j, sum, prod;

    sum = 0;
    prod = 1;

    printf("n=");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        sum = sum + i;
    }
    for(j=1; j<=n; j++)
    {
        prod = prod*j;
    }

    printf("sum is: %d\n", sum);
    printf("prod is: %d\n", prod);

    return 0;
}

