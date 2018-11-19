#include <stdio.h>

int main ()
{
    int a, b, c = 0;
    
    printf ( "give two numbers:\n" );
    scanf ( "%d%d", &a, &b );
    
    c = a;
    a = b;
    b = c;
    
    printf ( "new numbers are %d and %d", a, b );

    return 0;
}