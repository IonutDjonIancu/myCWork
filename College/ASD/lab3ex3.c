#include <stdio.h>

int main()
{
    int n, i;
    float ma = 0;

    printf("give n: \n");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        ma = ma + i;
    }

    printf("media aritmetica este: %f", ma/n);

    return 0;
}
