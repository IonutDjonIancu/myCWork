 #include <stdio.h>
    #include <string.h>
    void cp(char *p1,char *p2) { 
        int i,j; 
    
        j = 0; 
        for(i = 0; i < strlen(p2); i += 2) 
                p1[j++\] = p2[i\]; 
        p1[j\] = '\0'; 
    } 
    int main(void) { 
        char str[100\]; 
    
        cp(str,"ABCD"); 
        printf("%s",str); 
        return 0; 
    }