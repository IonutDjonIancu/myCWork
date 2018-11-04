#include <stdio.h>


int main()
{
    int a, b, c, max;
    max = 0;

    printf("give values for a, b and c:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    max = (a>=b) ? a : b;
    max = (c>=max) ? c : max;

    printf("Maxim is: %d", max);

    return 0;
}
