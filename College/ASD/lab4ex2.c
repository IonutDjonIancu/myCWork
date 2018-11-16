#import <stdio.h>

int main ()
{
    int n;

    printf ( "give a number smaller than 10,000:\n" );
    scanf ( "%d", &n );

    if ( n<10 )
        printf ( "one digit number" );
    else if ( n<100 )
        printf ( "two digit number" );
    else if ( n<1000 )
        printf ( "three digit number" );
    else if ( n<10000 )
        printf ( "four digit number" );
    else if ( n<100000 )
        printf ( "five digit number" );
    else
        printf ( "number to big" );

    return 0;
}
