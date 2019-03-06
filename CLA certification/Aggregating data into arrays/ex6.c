#include <stdio.h>
    int main(void) { 
        int t[5] = {1,2,3,4,5}; 
        int *p1,*p2,s=1; 
        p1 = &t[0]; 
        p2 = &t[4]; 
        s += *p1 + *p2; 
        printf("%d",s); 
        return 0; 
    }