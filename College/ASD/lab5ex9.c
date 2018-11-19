#include <stdio.h>
#include <math.h>

int main ()
{
    int i, n, prime;
    prime = 1;
    
    printf ( "give a number:\n" );
    scanf ( "%d", &n );
    
    for ( i=2; i<n; i++ )
    {
        if ( n%i == 0 )
        {
            prime = 0;
            break;
        }
    }
    
    if (prime)
    {
        printf ( "number %d is prime\n", n );
    }
    else
    {
        printf ( "number is not a prime\n" );
    }
    
    
    
    

    return 0;
}