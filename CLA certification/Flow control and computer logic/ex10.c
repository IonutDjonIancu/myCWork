#include <stdio.h>
    int main(void) { 
        int i = -1,j = -i; 
        int w1,w2; 
        w1 = (i > 0) && (j < 0) || (i < 0) && (j > 0); 
        w2 = (i <= 0) || (j >= 0) && (i >= 0) || (j <= 0); 
        printf("%d",w1 == w2); 
        return 0;
    }