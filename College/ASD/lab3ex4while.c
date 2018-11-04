#include <stdio.h>

int main()
{

    int n, i, fact;
    fact = 1;
    i = 1;

    printf("give n: ");
    scanf("%d", &n);

    while(i<=n)
    {
        fact = fact*i;
        i++;
    }

    printf("%d factorial is: %d", n, fact);

    return 0;
}
