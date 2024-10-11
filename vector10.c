#include <stdio.h>

int main() {
    int vector[10];
    scanf("%d", &vector[0]);
    
    for(int i = 1; i<10; i++) {
        vector[i] = vector[i-1]*2;
    }
    
    for(int i = 0; i<10; i++) {
        printf("N[%d] = %d\n", i, vector[i]);   
    }
    
    return 0;
}
