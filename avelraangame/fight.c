#include <stdio.h>

int fight(int a, int b){

    int roll1;
    int roll2;

    if(a>b){
        roll1 = a - b;
        printf("a>b %d\n", roll1);
    }

    else{
        roll2 = b - a;
        printf("b>a %d\n", roll2);
    }
        
    return(0);
}




int main(void){

    fight(2,3);

    printf("press ENTER key to quit\n");
    return(0);
}
