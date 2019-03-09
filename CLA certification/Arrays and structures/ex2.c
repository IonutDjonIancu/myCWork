 #include <stdio.h>
    int main(void) { 
        int     t[2\][2\]; 
        int     i,j,s = 0; 
        for(i = 0; i < 2; i++) 
            for(j = 1; j >= 0; j  ) 
                t[i\][j\] = 2 * j + 1; 
        printf("%d",t[1\][0\]); 
        return 0; 
    }