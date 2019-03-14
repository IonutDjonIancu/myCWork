 #include <stdio.h>
    int f1(int v) { 
        v *= v; 
        return v; 
    } 
    int f2(int p1, int p2) { 
        return p1 / p2; 
    } 
    int main(void) { 
        int v = 0; 
        f1(f1(f2(2,4))); 
        printf("%d",v); 
        return 0; 
    }