#include <stdio.h>

int main ()
{
    int year;

    printf ( "give year:\n" );
    scanf ( "%d", &year );

    if ( year%4==0 )
    {
        printf ( "%d is a leap year", year );
    }
    else if ( year%100>0 && year%400==0 )
    {
        printf ( "%d is a leap year", year );
    }
    else
    {
        printf ( "is not a leap year" );
    }


    return 0;
}
