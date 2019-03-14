  #include <stdio.h>
    #include <string.h>
    void f(char *s) { 
        s[1\] = '\0'; 
    } 
    int main(void) { 
        char p1[\] = "ABC", p2[\] = "XYZ"; 
        f(p1); 
        f(p2);     
        printf("%d",strlen(p1) + strlen(p2)); 
        return 0; 
    }