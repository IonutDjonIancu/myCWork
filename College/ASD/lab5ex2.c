#include <stdio.h>

int main ()
{
    int a, b;
    double x;
    
    printf ( "give the interval a and b:\n" );
    scanf ( "%d%d", &a, &b );
    
    printf ( "=============" );
    printf ( "\ngive the number x:\n" );
    scanf ( "%lf", &x );
    
    if ( ( x>=a ) && ( x<b ) )
    {
        printf ( "Number %6.3lf is in between interval [ %d, %d ) ", x, a, b );
    }
    else
    {
        printf ( "Number is not between %d and %d", a, b );
    }
    
    
    
    
    return 0;
}