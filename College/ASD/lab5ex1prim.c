#include <stdio.h>

int main ()
{
    int a, b, c;

    printf ( "give number of hens and cats:\n" );
    scanf ( "%d%d", &a, &b);

    c = 2*a + 4*b + 2;

    printf ( "there are %d legs in total", c );

    return 0;
}
