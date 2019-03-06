#include <stdio.h>
    int main(void) { 
        int i,j = 3; 
    
        i =   j;
        j += !(i % 2); 
        printf("%d",j); 
        return 0; 
    }