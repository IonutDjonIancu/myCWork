#include <stdio.h>

int main()
{
    int n, i, sum;
    sum = 0;

    printf("give n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("the sum of the first %d numbers is : %d", n, sum);

    return 0;
}
