#include <stdio.h>
    #include <stdlib.h>
    int main(void) { 
        int **pt; 
        pt = (int **)malloc (2 * sizeof (int *)); 
        pt[0\] = (int *) malloc(sizeof(int) * 2); 
        pt[1\] = (int *) malloc(sizeof(int) * 2); 
        pt[1\][1\] = pt[0\][0\] = 1; 
        pt[0\][1\] = pt[1\][0\] = 2; 
        printf("%d", pt[0\][0\] / pt[1\][0\]); 
        free(pt[1\]); 
        free(pt[0\]); 
        free(pt); 
        return 0; 
    }