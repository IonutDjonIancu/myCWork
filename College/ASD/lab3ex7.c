#include <stdio.h>

int main()
{
    int n, i, sum;
    sum = 0;

    printf("n= ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("1 este numar perfect");
    }
    else
    {
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum = sum + i;
            }
        }

        if(n==sum)
        {
            printf("%d este numar perfect\n", n);
        }
        else
        {
            printf("%d nu este numar perfect\n", n);
        }
    }

    return 0;
}
