#include <stdio.h>
    int main(void) { 
        int i=1,j=2,*p; 
        p = &i; 
        *p = j; 
        *p = 2 * j; 
        i = *p; 
        printf("%d",i); 
        return 0; 
    }