#include <stdio.h>

int main()
{
    int n, i, sum, prod;
    sum = 0;
    prod = 1;

    printf("give n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        sum = sum + i;
    }
    for(i=1; i<=n; i++)
    {
        prod = prod*i;
    }

    printf("the sum of the first %d numbers is: %d\n", n, sum);
    printf("the prod of the first %d numbers is: %d\n", n, prod);

    return 0;
}
