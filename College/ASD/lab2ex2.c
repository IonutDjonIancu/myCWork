#include <stdio.h>

int main()
{
    int n, suma, i;
    suma =  0;

    printf("introduceti n numere naturale= ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        suma = suma + i;
    }

    printf("suma = %d\n", suma);

    return 0;
}