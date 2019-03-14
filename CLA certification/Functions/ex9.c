 #include <stdio.h>
    char fun(char *n, int m) { 
        return *(n + 2 * m);
    } 
    int main(void) { 
        printf("%c",fun("aAbBcCdD",1)); 
        return 0; 
    }