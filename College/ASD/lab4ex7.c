#include <stdio.h>

int main ()
{
    int n, i;
    n = 1;
    i = 0;


    while ( n!=0 )
    {
        printf ( "give number:\n" );
        scanf ( "%d", &n );
        if ( n!=0 )
        {
            i++;
        }
    }

    printf ( "%d numbers where given", i );

    return 0;
}

