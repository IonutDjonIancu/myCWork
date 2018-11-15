#include <stdio.h>

int main()
{
    int a;

    while(a!=0)
    {
        printf("give a:");
        scanf("%d", &a);
        if(a%5==0)
        {
            printf("%d", a);
        }


    }

    return 0;
}

