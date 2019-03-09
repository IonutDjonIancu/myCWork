 #include <stdio.h>
    struct S1 { 
        int p1; 
    }; 
    struct S2 { 
        int p1; 
        struct S1 s1; 
    }; 
    int main(void) { 
        struct S2 s2 = { 4, 5 }; 
       printf("%d",s2.p1 + s2.s1.p1); 
        return 0; 
    }