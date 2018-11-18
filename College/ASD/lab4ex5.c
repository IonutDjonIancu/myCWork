#include <stdio.h>

int main ()
{
    int a, b, c;

    printf ( "give 3 numbers:\n" );
    scanf ( "%d%d%d", &a, &b, &c );

    if ( b==a+1 && c==a+2 )
    {
        printf ( "%d %d %d", a, b, c );
    }
    else if ( c==a+1 && b==a+2 )
    {
        printf ( "%d %d %d", a, c, b );
    }
    else if ( a==b+1 && c==b+2 )
    {
        printf ( "%d %d %d", b, a, c );
    }
    else if ( c==b+1 && a==b+2 )
    {
        printf ( "%d %d %d", b, c, a );
    }
    else if ( a==c+1 && b==c+2 )
    {
        printf ( "%d %d %d", c, a, b );
    }
    else if ( b==c+1 && a==c+2 )
    {
        printf ( "%d %d %d", c, b, a );
    }
    else
    {
        printf ( "can't be sorted consecutively" );
    }

    return 0;
}
