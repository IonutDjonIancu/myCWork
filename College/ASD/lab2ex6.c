#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;

    printf("introduceti numerele:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);


    if(pow(a,2) == pow(b,2) + pow(c,2))
    {
        printf("sunt numere pitagoreice\n");
    }
    else if(pow(b,2) == pow(a,2) + pow(c,2))
    {
        printf("sunt numere pitagoreice\n");
    }
    else if(pow(c,2) == pow(a,2) + pow(b,2))
    {
        printf("sunt numere pitagoreice\n");
    }
    else
    {
        printf("nu sunt numere pitagoreice\n");
    }

    return 0;
}