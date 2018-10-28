#include <stdio.h>

int main()
{
    int a, b, c, max; // se declara 4 numere intregi

    printf("a= ");
    scanf("%d", &a); // se citeste a
    printf("b= ");
    scanf("%d", &b); // se citeste b
    if(a>=b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    printf("c= ");
    scanf("%d", &c); // se citeste c
    if(c>max)
    {
        max = c;
    }

    printf("max is: %d\n", max);
    return 0;
}