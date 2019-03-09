 #include <stdio.h>
    int main(void) { 
        int t[2\][3\] = { { 3, 2, 1 }, { 1, 2, 3} }; 
        printf("%d", sizeof(t) / sizeof(t[1\])); 
        return 0; 
    }