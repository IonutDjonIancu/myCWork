#include <stdio.h>

int main()
{
    int n;

    while( n!=0 )
    {
        printf( "give n: " );
        scanf( "%d", &n );

        if( n%2 == 0 )
        {
            printf( "%d ",n );
        }
    }

    return 0;
}
