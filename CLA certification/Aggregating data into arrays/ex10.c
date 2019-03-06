 #include <stdio.h>
    #include <string.h>
    int main(void) { 
        char t[20] = "ABCDEFGHIJK"; 
        int  s = strlen(t); 
        t[3] = '\0'; 
        s += strlen(t); 
        strcpy(t,"ABCDEF"); 
        s += strlen(t); 
        strcat(t,"ABC"); 
        s += strlen(t); 
        printf("%d",s); 
        return 0; 
    }