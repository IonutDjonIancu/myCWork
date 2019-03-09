 #include <stdio.h>
    #include <stdlib.h>
    int main(void) { 
        int    *p; 
        int i,j,s; 
        p = (int *)malloc(sizeof(int) * 5); 
        for(i = 0; i < 5; i++) 
            p[i\] = 5   1; 
        s = 0; 
        for(i = 1; i < 5; i+=2) 
            s += p[i\]; 
        free(p); 
        printf("%d",s); 
        return 0;
    }