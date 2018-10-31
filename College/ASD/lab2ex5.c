#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double fx;
    
    printf("x= ");
    scanf("%lf", &x);

    if(x<=-7)
    {
        fx = (-6)*x + 20;
    }
    else if(x>-7 && x<=0)
    {
        fx = x + 30;
    }
    else
    {
        fx = sqrt(x) + 2;
    }

    printf("fx is: %lf\n", fx);

    return 0;
}