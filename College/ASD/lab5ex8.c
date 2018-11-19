#include <stdio.h>

int main ()
{
    long sum, i, n, prod;
    sum = 0;
    prod = 1;
    
    printf ( "give a number:\n" );
    scanf ( "%d", &n );
    
    for ( i=1; i<=n; i++ )
    {
        prod = prod*i;
        sum = sum + prod;
    }

    printf ( "sum is = %d", sum );


}