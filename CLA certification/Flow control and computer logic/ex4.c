   #include <stdio.h>
    int main(void) { 
        int Int; 
        char Char; 
        short Short; 
        float Float;
    
        Int = 100; Char = '$';     Short = Char; Float = 0.5; 
        Int = Short + Char + Float; 
        Float = Int; 
        printf("%f",Float); 
        return 0;
    }