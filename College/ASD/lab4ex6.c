#include <stdio.h>

int main ()
{
    int a, b, c;

    printf ( "give two numbers:\n" );
    scanf ( "%d%d", &a, &b );

    printf ( "a=%d & b=%d", a, b );

    c = b;
    b = a;
    a = c;

    printf ( "\na=%d & b=%d", a, b );

    return 0;
}
