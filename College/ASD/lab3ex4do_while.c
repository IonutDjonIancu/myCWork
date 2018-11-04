#include <stdio.h>

int main()
{

    int n, i, prod;
    prod = 1;
    i = 1;

    printf("give n: ");
    scanf("%d", &n);

    do
    {
        prod = prod * i;
        i++;
    }
    while(i<=n);

    printf("%d factorial is: %d", n, prod);


    return 0;
}
