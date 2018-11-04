#include <stdio.h>

int main()
{
    int n, i, div;
    i = 1;

    printf("give n: ");
    scanf("%d", &n);

    printf("the common divisors for %d are: \n", n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
