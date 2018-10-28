#include <stdio.h>

int main()
{
    int n, i, produs;
    produs = 1;
   
    printf("n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        produs = produs * i;
    }

    // pt while
    // i = 1;
    //while(i<=n)
    // {
    //     produs = produs * i;
    //     i++;
    // }

    printf("%d factorial = %d\n", n, produs);

    return 0;
}