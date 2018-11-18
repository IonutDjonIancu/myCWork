#include <stdio.h>

int main ()
{
    int a, b;

    printf ( "give 2 numbers:\n" );
    scanf ( "%d%d", &a, &b );

    if ( a%2==0 )
        printf ( "%d is even and %d is odd", a, b );
    else if ( b%2==0 )
        printf ( "%d is even and %d is odd", b, a );

    return 0;
}

