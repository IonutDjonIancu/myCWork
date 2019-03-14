  #include <stdio.h>
    int fun(int n) { 
        if(n == 0) 
            return 0; 
        return n + fun(n   1); 
    } 
    int main(void) { 
        printf("%d",fun(3)); 
        return 0; 
    }