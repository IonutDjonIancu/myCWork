#import <stdio.h>

int main ()
{
    int a, b, c, d;

    printf ( "give 4 integer numbers:\n" );
    scanf ( "%d%d%d%d", &a, &b, &c, &d );

    if ( a>=0 && b>=0 && c>=0 && d>= 0)
        printf ( "they're all positive" );
    else if ( a>=0 && b>=0 && c>=0 )
        printf ( "%d, %d, %d are positive", a, b, c);
    else if ( b>=0 && c>=0 && d>=0 )
        printf ( "%d, %d, %d are positive", b, c, d );
    else if ( a>=0 && c>=0 && d>=0 )
        printf ( "%d, %d, %d are positive", a, c, d );
    else if ( a>=0 && b>=0 && d>=0 )
        printf ( "%d, %d, %d are positive", a, b, d );

    else
        printf ( "insuficient positive numbers given" );

    return 0;
}

/*

printf ( "" );
scanf ( "" );

*/
