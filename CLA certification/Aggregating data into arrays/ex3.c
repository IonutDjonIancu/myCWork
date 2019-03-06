#include <stdio.h>
    int main(void) { 
        int i, s = 0, t[5] = {1,2,3,4}; 
        for(i = 0; i < 5 ; i++) 
            s += t[i]; 
        printf("%d",s); 
        return 0; 
    }