 #include <stdio.h>
    int fun(int n) { 
        return n   1; 
    } 
    int main(void) { 
        printf("%d",fun(fun(fun(fun(fun(3)))))); 
        return 0; 
    }