#include <stdio.h>

int main()
{
    int n, i;
    n = 0;
    float ma;
    ma = 0;

    printf("n= ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        ma = ma + i;
    }

    ma = ma/n;

    printf("media aritmetica a %d numere naturale consecutive este: %f\n", n, ma);

    return 0;
}