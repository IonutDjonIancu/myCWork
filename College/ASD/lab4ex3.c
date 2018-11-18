#include <stdio.h>

int main ()
{
    int a, b, c, d;

    printf ( "give 4 number:\n" );
    scanf ( "%d%d%d%d", &a, &b,&c, &d );

    if ( a+b+c>0 )
        printf ( "numbers %d %d %d form a positive sum", a, b, c );
    else if ( b+c+d>0 )
        printf ( "numbers %d %d %d form a positive sum", b, c, d );
    else if ( a+c+d>0 )
        printf ( "numbers %d %d %d form a positive sum", a, c, d );
    else if ( a+b+d>0 )
        printf ( "numbers %d %d %d form a positive sum", a, b, d );
    else
        printf ( "none of the numbers form a positive sum" );

    return 0;
}
