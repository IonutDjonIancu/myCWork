 #include <stdio.h>
    #include <string.h>
    int main(void) { 
        char t[10] = ""; 
        int  s; 
        s = strlen(t); 
        strcat(t,"ABCDEF"); 
        s += strlen(t); 
        printf("%d",s); 
        return 0; 
    }