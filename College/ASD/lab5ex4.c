#include <stdio.h>

int main ()
{
    int n, i, sum;
    sum = 0;
    
    printf ( "give a number greater than 0:\n" );
    scanf ( "%d", &n );
    
    for ( i=0; i<=n; i++ )
    {
        sum += i;
    }
    
    printf ( "the sum is %d", sum );
    
    return 0;
}