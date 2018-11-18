#include <stdio.h>

int main ()
{
    double x, a, b;
    
    printf ( "give a and b coefficients:\n" );
    scanf ( "%lf%lf", &a, &b );
    
    if ( a==0 )
    {
        if ( b==0 )
        {
            printf ( "the equation has infinite solutions\n" );
        }
        printf ( "the equation has 0 solutions" );
    }
    else
    {
        x = -b/a;
        printf ( "the solution of equation %.1lf*x + %.1lf = 0 is x = %.1lf", a, b, x );
    }

    return 0;
}