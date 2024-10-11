#include <stdio.h>

int main() {
    int vector[20];
    
    for(int i = 0; i<20; i++) {
       scanf("%d", &vector[i]);
    }
    
    int i=0,j=19;
    while(i<j){
        int swapAux = vector[i];
        vector[i] = vector[j];
        vector[j]=swapAux;
        i++;
        j--;
    }
    
    for(int i = 0; i<20; i++) {
        printf("N[%d] = %d\n", i, vector[i]);   
    }
    
    return 0;
}
