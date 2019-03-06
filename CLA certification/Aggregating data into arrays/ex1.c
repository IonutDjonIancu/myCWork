 #include <stdio.h>
    int main(void) { 
        int i,j=0; 
        for(i = 0; i < 10; i+=2) 
            switch(i) { 
                case 0: j++; break; 
                case 2: j++; 
                case 4: j++; break; 
                default: j--; 
            } 
        printf("%d",j); 
        return 0;
    }