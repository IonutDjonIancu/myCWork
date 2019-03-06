
    #include <stdio.h>
    int main(void) { 
        int i = 0; 
        int j = 100; 
    
        for(i = i; j; i++) 
            j /= 3; 
        printf("%d",i); 
        return 0; 
    }